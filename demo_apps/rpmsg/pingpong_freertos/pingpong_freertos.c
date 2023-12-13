
#include "rpmsg/rpmsg_rtos.h"
#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"
#include "board.h"
#include "mu_imx.h"
#include "debug_console_imx.h"

////////////////////////////////////////////////////////////////////////////////
// Definitions
////////////////////////////////////////////////////////////////////////////////
#define APP_TASK_STACK_SIZE 256

/*
 * APP decided interrupt priority
 */
#define APP_MU_IRQ_PRIORITY 3

typedef struct the_message
{
   uint32_t  DATA;
} THE_MESSAGE, * THE_MESSAGE_PTR;

////////////////////////////////////////////////////////////////////////////////
// Code
////////////////////////////////////////////////////////////////////////////////

static void PingPongTask (void* param)
{
    int result;
    struct remote_device *rdev = NULL;
    struct rpmsg_channel *app_chnl = NULL;
    THE_MESSAGE msg = {0};
    int len;

    /* Print the initial banner */
    PRINTF("\r\nRPMSG PingPong FreeRTOS RTOS API Demo...\r\n");

    PRINTF("RPMSG Init as Remote\r\n");
    result = rpmsg_rtos_init(0 /*REMOTE_CPU_ID*/, &rdev, RPMSG_MASTER, &app_chnl);
    assert(0 == result);

    PRINTF("Name service handshake is done, M4 has setup a rpmsg channel [%d ---> %d]\r\n", app_chnl->src, app_chnl->dst);

    while (true)
    {
        /* receive/send data to channel default ept */
        result = rpmsg_rtos_recv(app_chnl->rp_ept, &msg, &len, sizeof(THE_MESSAGE), NULL, 0xFFFFFFFF);
        assert(0 == result);
        PRINTF("Get Data From Master Side : %d\r\n", msg.DATA);
        msg.DATA++;
        result = rpmsg_rtos_send(app_chnl->rp_ept, &msg, sizeof(THE_MESSAGE), app_chnl->dst);
        assert(0 == result);
    }

    /* If destruction required */
    /*
    PRINTF("\r\nMessage pingpong finished\r\n");

    rpmsg_rtos_deinit(rdev);
    */
}

/*
 * MU Interrrupt ISR
 */
void BOARD_MU_HANDLER(void)
{
    /*
     * calls into rpmsg_handler provided by middleware
     */
    rpmsg_handler();
}

/*!
 * @brief Main function
 */
int main (void)
{
    hardware_init();

    /*
     * Prepare for the MU Interrupt
     *  MU must be initialized before rpmsg init is called
     */
    MU_Init(BOARD_MU_BASE_ADDR);
    NVIC_SetPriority(BOARD_MU_IRQ_NUM, APP_MU_IRQ_PRIORITY);
    NVIC_EnableIRQ(BOARD_MU_IRQ_NUM);

    /* Create a demo task. */
    xTaskCreate(PingPongTask, "Ping Pong Task", APP_TASK_STACK_SIZE, NULL, tskIDLE_PRIORITY + 1, NULL);

    /* Start FreeRTOS scheduler. */
    vTaskStartScheduler();

    /* Should never reach this point. */
    while(true);
}

/*******************************************************************************
 * EOF
 ******************************************************************************/

