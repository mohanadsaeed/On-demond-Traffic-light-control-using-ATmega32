 /******************************************************************************
 *
 * Module: Dio
 *
 * File Name: Dio.h
 *
 * Description: Header file for ATmega32 Microcontroller - Dio Driver
 *
 * Author: Mohanad K. Saeed
 ******************************************************************************/
#ifndef DIO_H
#define DIO_H

#include "../../Utilities/std_types.h"
#include "../../Utilities/common_macros.h"
#include "../..//Utilities/micro_config.h"
/* Dio Pre-Compile Configuration Header file */
#include "Dio_Cfg.h"

/*******************************************************************************
 *                              Module Data Types                              *
 *******************************************************************************/
/* Type definition for Dio_ChannelType used by the DIO APIs */
typedef uint8 Dio_ChannelType;

/* Type definition for Dio_PortType used by the DIO APIs */
typedef uint8 Dio_PortType;

/* Type definition for Dio_LevelType used by the DIO APIs */
typedef uint8 Dio_LevelType;

/* Possible directions of a pin */
typedef enum {
	PIN_IN,
	PIN_OUT
} Dio_PinDirectionType;

typedef enum {
	DISABLE_PULL_UP,
	ENABLE_PULL_UP
} Dio_PinPullUp;

typedef struct
{
	/* Member contains the ID of the Port that this channel belongs to */
	Dio_PortType Port_Num;
	/* Member contains the ID of the Channel*/
	Dio_ChannelType Ch_Num;
	/* Member contains the pin direction*/
	Dio_PinDirectionType Pin_Direction;
	/* Member contains the pin pull up activation*/
	Dio_PinPullUp Pin_Pull_Up;	
}Dio_ConfigChannel;

/* Data Structure required for initializing the Dio Driver */
typedef struct Dio_ConfigType
{
	Dio_ConfigChannel Channels[DIO_CONFIGURED_CHANNLES];
} Dio_ConfigType;

/*******************************************************************************
 *                      Function Prototypes                                    *
 *******************************************************************************/
/* Function for DIO Initialization API */
void Dio_Init(const Dio_ConfigType * ConfigPtr);

/* Function for DIO read Port API */
Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId);

/* Function for DIO write Port API */
void Dio_WriteChannel(Dio_ChannelType ChannelId, Dio_LevelType Level);

/*********************************************************************************
 * 			        PIN Definitions 														 *
 * *******************************************************************************/
#define DIO_PORTA 					     (uint8)0
#define DIO_PORTB 					 	 (uint8)1
#define DIO_PORTC 						 (uint8)2
#define DIO_PORTD 						 (uint8)3
#define DIO_PIN0 					     (uint8)0
#define DIO_PIN1 						 (uint8)1
#define DIO_PIN2 						 (uint8)2
#define DIO_PIN3 						 (uint8)3
#define DIO_PIN4 						 (uint8)4
#define DIO_PIN5 						 (uint8)5
#define DIO_PIN6 						 (uint8)6
#define DIO_PIN7 						 (uint8)7

/*******************************************************************************
 *                       External Variables                                    *
 *******************************************************************************/
/* Extern PB structures to be used by Dio and other modules */
extern const Dio_ConfigType Dio_Configuration;

#endif /* DIO_H */
