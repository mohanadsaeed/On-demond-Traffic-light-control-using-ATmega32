/* -----------------------------------------------------------------------------------------
[FILE NAME]    :	Led.c

[AUTHOR]       :	MOHANAD K. SAEED

[DATA CREATED] :	11/09/2022

[DESCRIPTION]  :	Source File for Led Driver  
------------------------------------------------------------------------------------------*/
#include "Led.h"
#include "../../MCAL/DIO/Dio.h"
#include <util/delay.h>

/*Intialization*/
void Led_Init(void){
	Dio_Init(&Dio_Configuration);
};

/*Led On*/
void Led_On(Dio_ChannelType ledChannel){
	Dio_WriteChannel(ledChannel,1);
};

/*Led Off*/
void Led_Off(Dio_ChannelType ledChannel){
	Dio_WriteChannel(ledChannel,0);
};

/*Led Blink*/
void Led_Blink(Dio_ChannelType ledChannel){
	Led_On(ledChannel);
	_delay_ms(200);
	Led_Off(ledChannel);
	_delay_ms(200);
}

/*Led Get State*/
Dio_LevelType Led_State(Dio_ChannelType ledChannel){
	return Dio_ReadChannel(ledChannel);
}



