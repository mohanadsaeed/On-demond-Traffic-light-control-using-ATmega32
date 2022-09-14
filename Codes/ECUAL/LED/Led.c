/* -----------------------------------------------------------------------------------------
[FILE NAME]    :	Led.c

[AUTHOR]       :	MOHANAD K. SAEED

[DATA CREATED] :	11/09/2022

[DESCRIPTION]  :	Source File for Led Driver  
------------------------------------------------------------------------------------------*/
#include "Led.h"
#include "../DIO/Dio.h"

/*Intialization*/
void Led_Init(void){
	Dio_Init(&Dio_Configuration);
};

/*Led Write*/
void Led_Write(Dio_ChannelType ledChannel,Dio_LevelType level){
	Dio_WriteChannel(ledChannel, level);
};



