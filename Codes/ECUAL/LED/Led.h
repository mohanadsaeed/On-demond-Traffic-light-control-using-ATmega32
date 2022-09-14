/* -----------------------------------------------------------------------------------------
[FILE NAME]    :	Led.h

[AUTHOR]       :	MOHANAD K. SAEED

[DATA CREATED] :	11/09/2022

[DESCRIPTION]  :	Header File for Led Driver  
------------------------------------------------------------------------------------------*/
#ifndef LED_H
#define LED_H

#include "../Utilities/std_types.h"
#include "../Utilities/micro_config.h"
#include "../Utilities/common_macros.h"

/*******************************************************************************
 *                              Module Macros                                  *
 *******************************************************************************/
#define LED1_CHANNEL		DioConf_LED1_CHANNEL_ID_INDEX
#define LED2_CHANNEL		DioConf_LED2_CHANNEL_ID_INDEX
#define LED3_CHANNEL		DioConf_LED3_CHANNEL_ID_INDEX
#define LED4_CHANNEL		DioConf_LED4_CHANNEL_ID_INDEX
#define LED5_CHANNEL		DioConf_LED5_CHANNEL_ID_INDEX
#define LED6_CHANNEL		DioConf_LED6_CHANNEL_ID_INDEX

 
/*******************************************************************************
 *                            Functions Definitions                            *
 *******************************************************************************/
/*Intialization*/
void Led_Init(void);

/*Led Write*/
void Led_Write(Dio_ChannelType led,Dio_LevelType level);

#endif
