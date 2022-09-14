/* -----------------------------------------------------------------------------------------
[FILE NAME]    :	Button.c

[AUTHOR]       :	MOHANAD K. SAEED

[DATA CREATED] :	11/09/2022

[DESCRIPTION]  :	Source File for Button Driver  
------------------------------------------------------------------------------------------*/
#include "Button.h"
#include "../DIO/Dio.h"

/*Intialization*/
void Button_Init(void){
	Dio_Init(&Dio_Configuration);
};

/*Button Read*/
Dio_LevelType Button_read(Dio_ChannelType buttonChannel){
	return Dio_ReadChannel(buttonChannel);
};


