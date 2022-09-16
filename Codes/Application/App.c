 /******************************************************************************
 *
 * Module: Application
 *
 * File Name: App.c
 *
 * Description: Source file for ATmega32 Microcontroller - Application
 *
 * Author: Mohanad Khaled
 ******************************************************************************/
#include "App.h"
#include "../ECUAL/Button/Button.h"
#include "../ECUAL/LED/Led.h"
#include "../MCAL/Timer/Timer.h"
#include "../MCAL/External Interrupt/external_interrupts.h"


volatile uint8 timer_Flag=0,lock=0,button_Flag=0;
static void Normal_Mode(void);
static void prepareCrossPedestrian(void);
static void crossPedestrian(void);
static void timer_callBack(void);
static void button_callBack(void);

//Function to initialize the used drivers in the application
void App_Init(void){
	SET_BIT(SREG,7);
	Button_Init();
	Led_Init();
	Timer1_Init(&Timer1_Configuration);
	Timer1_setCallBack(timer_callBack,Timer1_Configuration.mode);
	INT0_Init(&Ei_ConfigurationInt0);
	INT0_setCallBack(button_callBack);
}

void App_Start(){
	Normal_Mode();
}

//The normal mode for the traffic light system
void Normal_Mode(void){
	timer_Flag=0;
	Timer1_startCount(Timer1_Configuration.clock);
	Led_On(LED1_CHANNEL);
	Led_On(LED6_CHANNEL);
	while(timer_Flag!=1){
		if(button_Flag!=1){
		}
		else{
			prepareCrossPedestrian();
			button_Flag=0;
			return;
		}
	}
	Timer1_stopCount();
	timer_Flag=0;
	Timer1_startCount(Timer1_Configuration.clock);
	Led_On(LED1_CHANNEL);
	Led_On(LED6_CHANNEL);
	while(timer_Flag!=1){
		if(button_Flag!=1){
			Led_Blink(LED2_CHANNEL);
		}
		else{
			prepareCrossPedestrian();
			button_Flag=0;
			return;
		}
	}
	Timer1_stopCount();
	timer_Flag=0;
	Led_Off(LED1_CHANNEL);
	Led_Off(LED2_CHANNEL);
	Led_Off(LED6_CHANNEL);
	Timer1_startCount(Timer1_Configuration.clock);
	Led_On(LED3_CHANNEL);
	Led_On(LED4_CHANNEL);
	while(timer_Flag!=1){
		if(button_Flag!=1){
		}
		else{
			prepareCrossPedestrian();
			button_Flag=0;
			return;
		}
	}
	Timer1_stopCount();
	timer_Flag=0;
	Timer1_startCount(Timer1_Configuration.clock);
	Led_On(LED3_CHANNEL);
	Led_On(LED4_CHANNEL);
	while(timer_Flag!=1){
		if(button_Flag!=1){
			Led_Blink(LED5_CHANNEL);
		}
		else{
			prepareCrossPedestrian();
			button_Flag=0;
			return;
		}
	}
	Timer1_stopCount();
	timer_Flag=0;
	Led_Off(LED3_CHANNEL);
	Led_Off(LED4_CHANNEL);
	Led_Off(LED5_CHANNEL);
}

//The procedure which happened when the pedestrian push the button
void crossPedestrian(void){
	Timer1_stopCount();
	timer_Flag=0;
	//wait 5 seconds
	Timer1_startCount(Timer1_Configuration.clock);
	while(timer_Flag!=1){
		//Turn On Cars' Red LED
		Led_On(LED3_CHANNEL);
		//Turn On Pedestrian's Green LED
		Led_On(LED4_CHANNEL);
	}
	Timer1_stopCount();
	timer_Flag=0;
	//Blinking Yellow LED for 5 seconds
	Timer1_startCount(Timer1_Configuration.clock);
	while(timer_Flag!=1){
		Led_Blink(LED2_CHANNEL);
		Led_Blink(LED5_CHANNEL);
	}
	Timer1_stopCount();
	timer_Flag=0;
	Led_Off(LED2_CHANNEL);
	Led_Off(LED3_CHANNEL);
	Led_Off(LED4_CHANNEL);
	Led_Off(LED5_CHANNEL);
}

void prepareCrossPedestrian(void){
	if(lock==0){
		lock=1;
		uint8 redLed,greenLed,yellowLed;
		redLed=Led_State(LED3_CHANNEL);
		yellowLed=Led_State(LED2_CHANNEL);
		greenLed=Led_State(LED1_CHANNEL);
		if(redLed){
			crossPedestrian();
			lock=0;
		}
		else{
			//Turn On Pedestrian Red LED
			//Blinking Yellow LED for 5 seconds
			Timer1_stopCount();
			timer_Flag=0;
			Timer1_startCount(Timer1_Configuration.clock);
			while(timer_Flag!=1){
				Led_On(LED1_CHANNEL);
				Led_On(LED6_CHANNEL);
				Led_Blink(LED2_CHANNEL);
				Led_Blink(LED5_CHANNEL);
			}
			Timer1_stopCount();
			timer_Flag=0;
			Led_Off(LED1_CHANNEL);
			Led_Off(LED2_CHANNEL);
			Led_Off(LED5_CHANNEL);
			Led_Off(LED6_CHANNEL);
			crossPedestrian();
			lock=0;
		}
	}
}

//The function which called when the pedestrian push the button to check the state of traffic flow
void button_callBack(void){
	button_Flag=1;
}

//Function to count 5 seconds
void timer_callBack(void){
	timer_Flag=1;
}

