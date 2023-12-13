
#include "clock_freq.h"
#include "ccm_imx7d.h"
#include "ccm_analog_imx7d.h"

/*FUNCTION**********************************************************************
 *
 * Function Name : get_gpt_clock_freq
 * Description   : Get clock frequency applys to the GPT module
 *
 *END**************************************************************************/
uint32_t get_gpt_clock_freq(GPT_Type* base)
{
    uint32_t root;
    uint32_t hz;
    uint32_t pre, post;

    switch((uint32_t)base)
    {
        case GPT3_BASE:
            root = CCM_GetRootMux(CCM, ccmRootGpt3);
            CCM_GetRootDivider(CCM, ccmRootGpt3, &pre, &post);
            break;
        case GPT4_BASE:
            root = CCM_GetRootMux(CCM, ccmRootGpt4);
            CCM_GetRootDivider(CCM, ccmRootGpt4, &pre, &post);
            break;
        default:
            return 0;
    }

    switch(root)
    {
        case ccmRootmuxGptOsc24m:
            hz = 24000000;
            break;
        case ccmRootmuxGptSysPllPfd0:
            hz = CCM_ANALOG_GetPfdFreq(CCM_ANALOG, ccmAnalogPfd0Frac);
            break;
        default:
            return 0;
    }

    return hz / (pre + 1) / (post + 1);
}

/*FUNCTION**********************************************************************
 *
 * Function Name : get_ecspi_clock_freq
 * Description   : Get clock frequency applys to the ECSPI module
 *
 *END**************************************************************************/
uint32_t get_ecspi_clock_freq(ECSPI_Type* base)
{
    uint32_t root;
    uint32_t hz;
    uint32_t pre, post;

    switch((uint32_t)base)
    {
        case ECSPI1_BASE:
            root = CCM_GetRootMux(CCM, ccmRootEcspi1);
            CCM_GetRootDivider(CCM, ccmRootEcspi1, &pre, &post);
            break;
        case ECSPI2_BASE:
            root = CCM_GetRootMux(CCM, ccmRootEcspi2);
            CCM_GetRootDivider(CCM, ccmRootEcspi2, &pre, &post);
            break;
        default:
            return 0;
    }

    switch(root)
    {
        case ccmRootmuxEcspiOsc24m:
            hz = 24000000;
            break;
        case ccmRootmuxEcspiSysPllPfd4:
            hz = CCM_ANALOG_GetPfdFreq(CCM_ANALOG, ccmAnalogPfd4Frac);
            break;
        default:
            return 0;
    }

    return hz / (pre + 1) / (post + 1);
}

/*FUNCTION**********************************************************************
 *
 * Function Name : get_flexcan_clock_freq
 * Description   : Get clock frequency applys to the FLEXCAN module
 *
 *END**************************************************************************/
uint32_t get_flexcan_clock_freq(CAN_Type* base)
{
    uint32_t root;
    uint32_t hz;
    uint32_t pre, post;

    switch((uint32_t)base)
    {
        case CAN1_BASE:
            root = CCM_GetRootMux(CCM, ccmRootCan1);
            CCM_GetRootDivider(CCM, ccmRootCan1, &pre, &post);
            break;
        case CAN2_BASE:
            root = CCM_GetRootMux(CCM, ccmRootCan2);
            CCM_GetRootDivider(CCM, ccmRootCan2, &pre, &post);
            break;
        default:
            return 0;
    }

    switch(root)
    {
        case ccmRootmuxCanOsc24m:
            hz = 24000000;
            break;
        case ccmRootmuxCanSysPllDiv4:
            hz = CCM_ANALOG_GetSysPllFreq(CCM_ANALOG) >> 2;
            break;
        case ccmRootmuxCanSysPllDiv1:
            hz = CCM_ANALOG_GetSysPllFreq(CCM_ANALOG);
            break;
        default:
            return 0;
    }

    return hz / (pre + 1) / (post + 1);
}

/*FUNCTION**********************************************************************
 *
 * Function Name : get_I2C_clock_freq
 * Description   : Get clock frequency applys to the I2C module
 *
 *END**************************************************************************/
uint32_t get_i2c_clock_freq(I2C_Type* base)
{
    uint32_t root;
    uint32_t hz;
    uint32_t pre, post;

    switch((uint32_t)base)
    {
        case I2C1_BASE:
            root = CCM_GetRootMux(CCM, ccmRootI2c1);
            CCM_GetRootDivider(CCM, ccmRootI2c1, &pre, &post);
            break;
        case I2C2_BASE:
            root = CCM_GetRootMux(CCM, ccmRootI2c2);
            CCM_GetRootDivider(CCM, ccmRootI2c2, &pre, &post);
            break;
        case I2C3_BASE:
            root = CCM_GetRootMux(CCM, ccmRootI2c3);
            CCM_GetRootDivider(CCM, ccmRootI2c3, &pre, &post);
            break;
        case I2C4_BASE:
            root = CCM_GetRootMux(CCM, ccmRootI2c4);
            CCM_GetRootDivider(CCM, ccmRootI2c4, &pre, &post);
            break;
        default:
            return 0;
    }

    switch(root)
    {
        case ccmRootmuxI2cOsc24m:
            hz = 24000000;
            break;
        case ccmRootmuxI2cSysPllDiv4:
            hz = CCM_ANALOG_GetSysPllFreq(CCM_ANALOG) >> 2;
            break;
        default:
            return 0;
    }

    return hz / (pre + 1) / (post + 1);
}

/*FUNCTION**********************************************************************
 *
 * Function Name : get_uart_clock_freq
 * Description   : Get clock frequency applys to the UART module
 *
 *END**************************************************************************/
uint32_t get_uart_clock_freq(UART_Type* base)
{
    uint32_t root;
    uint32_t hz;
    uint32_t pre, post;

    switch((uint32_t)base)
    {
        case UART2_BASE:
            root = CCM_GetRootMux(CCM, ccmRootUart2);
            CCM_GetRootDivider(CCM, ccmRootUart2, &pre, &post);
            break;
        case UART5_BASE:
            root = CCM_GetRootMux(CCM, ccmRootUart5);
            CCM_GetRootDivider(CCM, ccmRootUart5, &pre, &post);
            break;
        case UART6_BASE:
            root = CCM_GetRootMux(CCM, ccmRootUart6);
            CCM_GetRootDivider(CCM, ccmRootUart6, &pre, &post);
            break;
        default:
            return 0;
    }

    switch(root)
    {
        case ccmRootmuxUartOsc24m:
            hz = 24000000;
            break;
        case ccmRootmuxUartSysPllDiv2:
            hz = CCM_ANALOG_GetSysPllFreq(CCM_ANALOG) >> 1;
            break;
        case ccmRootmuxUartSysPllDiv1:
            hz = CCM_ANALOG_GetSysPllFreq(CCM_ANALOG);
            break;
        default:
            return 0;
    }

    return hz / (pre + 1) / (post + 1);
}

/*******************************************************************************
 * EOF
 ******************************************************************************/
