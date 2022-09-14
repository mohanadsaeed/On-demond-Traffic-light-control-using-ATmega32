 /******************************************************************************
 *
 * Module: Dio
 *
 * File Name: Dio.c
 *
 * Description: Source file for ATmega32 Microcontroller - Dio Driver
 *
 * Author: Mohanad K. Saeed
 ******************************************************************************/
#include "Dio.h"

static const Dio_ConfigChannel * Dio_PortChannels = (void *)0;

/************************************************************************************
* Service Name: Dio_Init
* Sync/Async: Synchronous
* Reentrancy: Non reentrant
* Parameters (in): ConfigPtr - Pointer to post-build configuration data
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Function to Initialize the Dio module.
************************************************************************************/
void Dio_Init(const Dio_ConfigType *ConfigPtr){
	uint8 i;
	Dio_PortChannels = ConfigPtr->Channels; /* address of the first Channels structure --> Channels[0] */
	/* Point to the correct PORT register according to the Port Id stored in the Port_Num member */
	for(i=0;i<DIO_CONFIGURED_CHANNLES;i++){
		switch(Dio_PortChannels[i].Port_Num)
		{
			case DIO_PORTA: 
				if(Dio_PortChannels[i].Pin_Direction==PIN_IN){
					DDRA&=~(1<<Dio_PortChannels[i].Ch_Num);
					if(Dio_PortChannels[i].Pin_Pull_Up==ENABLE_PULL_UP){
						PORTA|=(1<<Dio_PortChannels[i].Ch_Num);
					}
				}
				else{
					DDRA|=(1<<Dio_PortChannels[i].Ch_Num);
				}
				break;
			case DIO_PORTB:   
				if(Dio_PortChannels[i].Pin_Direction==PIN_IN){
					DDRB&=~(1<<Dio_PortChannels[i].Ch_Num);
					if(Dio_PortChannels[i].Pin_Pull_Up==ENABLE_PULL_UP){
						PORTB|=(1<<Dio_PortChannels[i].Ch_Num);
					}
				}
				else{
					DDRB|=(1<<Dio_PortChannels[i].Ch_Num);
				}
				break;
			case DIO_PORTC:    
				if(Dio_PortChannels[i].Pin_Direction==PIN_IN){
					DDRC&=~(1<<Dio_PortChannels[i].Ch_Num);
					if(Dio_PortChannels[i].Pin_Pull_Up==ENABLE_PULL_UP){
						PORTC|=(1<<Dio_PortChannels[i].Ch_Num);
					}
				}
				else{
					DDRC|=(1<<Dio_PortChannels[i].Ch_Num);
				}
				break;
			case DIO_PORTD:    
				if(Dio_PortChannels[i].Pin_Direction==PIN_IN){
					DDRD&=~(1<<Dio_PortChannels[i].Ch_Num);
					if(Dio_PortChannels[i].Pin_Pull_Up==ENABLE_PULL_UP){
						PORTD|=(1<<Dio_PortChannels[i].Ch_Num);
					}
				}
				else{
					DDRD|=(1<<Dio_PortChannels[i].Ch_Num);
				}
				break;
		}
	}
};

/************************************************************************************
* Service Name: Dio_WriteChannel
* Sync/Async: Synchronous
* Reentrancy: Reentrant
* Parameters (in): ChannelId - ID of DIO channel.
*                  Level - Value to be written.
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Function to set a level of a channel.
************************************************************************************/
void Dio_WriteChannel(Dio_ChannelType ChannelId, Dio_LevelType Level){
	switch(Dio_PortChannels[ChannelId].Port_Num)
	{
		case DIO_PORTA:
			if(Level == 0){
				PORTA&=~(1<<Dio_PortChannels[ChannelId].Ch_Num);
			}
			else{
				PORTA|=(1<<Dio_PortChannels[ChannelId].Ch_Num);
			}
			break;
		case DIO_PORTB:   
			if(Level == 0){
				PORTB&=~(1<<Dio_PortChannels[ChannelId].Ch_Num);
			}
			else{
				PORTB|=(1<<Dio_PortChannels[ChannelId].Ch_Num);
			}			
			break;
		case DIO_PORTC:    
			if(Level == 0){
				PORTC&=~(1<<Dio_PortChannels[ChannelId].Ch_Num);
			}
			else{
				PORTC|=(1<<Dio_PortChannels[ChannelId].Ch_Num);
			}			
			break;
		case DIO_PORTD:    
			if(Level == 0){
				PORTD&=~(1<<Dio_PortChannels[ChannelId].Ch_Num);
			}
			else{
				PORTD|=(1<<Dio_PortChannels[ChannelId].Ch_Num);
			}			
			break;
	}
}

/************************************************************************************
* Service Name: Dio_ReadChannel
* Sync/Async: Synchronous
* Reentrancy: Reentrant
* Parameters (in): ChannelId - ID of DIO channel.
* Parameters (inout): None
* Parameters (out): None
* Return value: Dio_LevelType
* Description: Function to return the value of the specified DIO channel.
************************************************************************************/
Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId){
	Dio_LevelType level;
	switch(Dio_PortChannels[ChannelId].Port_Num)
	{
		case DIO_PORTA:
			level=((1<<Dio_PortChannels[ChannelId].Ch_Num)&PINA)>>Dio_PortChannels[ChannelId].Ch_Num;
			break;
		case DIO_PORTB: 
			level=((1<<Dio_PortChannels[ChannelId].Ch_Num)&PINB)>>Dio_PortChannels[ChannelId].Ch_Num;
			break;
		case DIO_PORTC: 
			level=((1<<Dio_PortChannels[ChannelId].Ch_Num)&PINC)>>Dio_PortChannels[ChannelId].Ch_Num;
			break;
		case DIO_PORTD: 
			level=((1<<Dio_PortChannels[ChannelId].Ch_Num)&PIND)>>Dio_PortChannels[ChannelId].Ch_Num;
			break;
	}
	return level;
}


