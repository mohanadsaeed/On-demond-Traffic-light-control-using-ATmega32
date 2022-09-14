/* -----------------------------------------------------------------------------------------
[FILE NAME]    :	Button.h

[AUTHOR]       :	MOHANAD K. SAEED

[DATA CREATED] :	11/09/2022

[DESCRIPTION]  :	Header File for Button Driver  
------------------------------------------------------------------------------------------*/
#ifndef BUTTON_H
#define BUTTON_H

#include "../Utilities/std_types.h"
#include "../Utilities/micro_config.h"
#include "../Utilities/common_macros.h"

/*******************************************************************************
 *                              Module Macros                                  *
 *******************************************************************************/
#define BUTTON1_CHANNEL  	DioConf_SW1_CHANNEL_ID_INDEX
 
/*******************************************************************************
 *                            Functions Definitions                            *
 *******************************************************************************/
/*Intialization*/
void Button_Init(void);

/*Button Read*/
Dio_LevelType Button_Read(Dio_ChannelType button);

#endif
