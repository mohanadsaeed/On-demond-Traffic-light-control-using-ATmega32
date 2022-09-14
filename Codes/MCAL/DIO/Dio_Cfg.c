 /******************************************************************************
 *
 * Module: Dio
 *
 * File Name: Dio_Cfg.c
 *
 * Description: Configuration Source file for ATmega32 Microcontroller - Dio Driver
 *
 * Author: Mohanad K. Saeed
 ******************************************************************************/
#include "Dio.h"

/* Structure used with Dio_Init API */
const Dio_ConfigType Dio_Configuration = {
	DioConf_SW1_PORT_NUM ,DioConf_SW1_CHANNEL_NUM ,DioConf_SW1_CHANNEL_DIRECTION ,DioConf_SW1_CHANNEL_PULL_UP ,
	DioConf_LED1_PORT_NUM,DioConf_LED1_CHANNEL_NUM,DioConf_LED1_CHANNEL_DIRECTION,DioConf_LED1_CHANNEL_PULL_UP,
	DioConf_LED2_PORT_NUM,DioConf_LED2_CHANNEL_NUM,DioConf_LED2_CHANNEL_DIRECTION,DioConf_LED2_CHANNEL_PULL_UP,
	DioConf_LED3_PORT_NUM,DioConf_LED3_CHANNEL_NUM,DioConf_LED3_CHANNEL_DIRECTION,DioConf_LED3_CHANNEL_PULL_UP,
	DioConf_LED4_PORT_NUM,DioConf_LED4_CHANNEL_NUM,DioConf_LED4_CHANNEL_DIRECTION,DioConf_LED4_CHANNEL_PULL_UP,
	DioConf_LED5_PORT_NUM,DioConf_LED5_CHANNEL_NUM,DioConf_LED5_CHANNEL_DIRECTION,DioConf_LED5_CHANNEL_PULL_UP,
	DioConf_LED6_PORT_NUM,DioConf_LED6_CHANNEL_NUM,DioConf_LED6_CHANNEL_DIRECTION,DioConf_LED6_CHANNEL_PULL_UP
	};