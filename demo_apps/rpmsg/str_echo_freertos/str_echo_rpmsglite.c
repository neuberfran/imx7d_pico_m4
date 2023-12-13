#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"

#include "rpmsg_lite.h"
#include "rpmsg_queue.h"
#include "rpmsg_ns.h"

#include "pin_mux.h"
#include "clock_config.h"
#include "board.h"
#include "fsl_debug_console.h"


#define APP_TASK_STACK_SIZE (1024)
#define LOCAL_EPT_ADDR (30)
#define RPMSG_MAX_SIZE 512
#define RPMSG_LITE_LINK_ID RL_PLATFORM_IMX7D_M4_LINK_ID
#define RPMSG_LITE_SHMEM_BASE 0x9FFF0000
#define RPMSG_LITE_NS_USED 1
#define RPMSG_LITE_NS_ANNOUNCE_STRING "rpmsg-openamp-demo-channel"

TaskHandle_t thread_handle;

void app_nameservice_isr_cb(unsigned int new_ept, const char *new_ept_name,
                            unsigned long flags, void *user_data)
{
    // Nameservice ISR code
}

void app_task(void *pvParameters)
{
    int recved = 0;
    char buf[RPMSG_MAX_SIZE];
    char rsp[RPMSG_MAX_SIZE];
    int len;
    volatile unsigned long remote_addr;
    struct rpmsg_lite_endpoint *volatile rl_endpoint;
    volatile rpmsg_queue_handle rl_queue;
    struct rpmsg_lite_instance *volatile rl_instance;

    /* Initialize RPMsg Core and create virtqueues */
    rl_instance = rpmsg_lite_remote_init((void *)RPMSG_LITE_SHMEM_BASE,
                                         RPMSG_LITE_LINK_ID, RL_NO_FLAGS);

    printf("Waiting for Master.\r\n");
    while (!rpmsg_lite_is_link_up(rl_instance))
    {
        // Wait for the link to be up
    }
    printf("Exit.\r\n");

    rl_queue = rpmsg_queue_create(rl_instance);
    rl_endpoint = rpmsg_lite_create_ept(rl_instance, LOCAL_EPT_ADDR,
                                        rpmsg_queue_rx_cb, rl_queue);

#ifdef RPMSG_LITE_NS_USED
    rpmsg_ns_bind(rl_instance, app_nameservice_isr_cb, NULL);
    rpmsg_ns_announce(rl_instance, rl_endpoint,
                      RPMSG_LITE_NS_ANNOUNCE_STRING, RL_NS_CREATE);
    printf("Nameservice announce sent.\r\n");
#endif /*RPMSG_LITE_NS_USED*/

    while (1)
    {
        rpmsg_queue_recv(rl_instance, rl_queue,
                         (unsigned long *)&remote_addr, (char *)buf,
                         sizeof(buf), &recved, RL_BLOCK);
        printf("\nFrom endpoint 0x%X received %d bytes:\n",
               (unsigned int)remote_addr, recved);
        buf[recved] = '\0';
        printf("%s\n", buf);

        /* Format the echo response */
        len = snprintf(rsp, sizeof(rsp), "echo: %s\r\n", buf);
        printf("Sending %d bytes to endpoint 0x%X:\n", len,
               (int)remote_addr);
        printf("%s", rsp);
        rpmsg_lite_send(rl_instance, rl_endpoint, remote_addr, rsp, len,
                        RL_BLOCK);
    }
}

int main(void)
{
    printf("======== rpmsg_lite remote_echo ========\n");

    xTaskCreate(app_task, "AppTask", APP_TASK_STACK_SIZE, NULL, tskIDLE_PRIORITY + 1, &thread_handle);

    vTaskStartScheduler();

    // You should not reach here
    for (;;)
    {
    }

    return 0;
}