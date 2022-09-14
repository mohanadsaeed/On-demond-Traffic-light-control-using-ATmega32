 /******************************************************************************
 *
 * Module: Timer
 *
 * File Name: Timer_Cfg.c
 *
 * Description: Configuration Source file for ATmega32 Microcontroller - Timer Driver
 *
 * Author: Mohanad K. Saeed
 ******************************************************************************/
#include "Timer.h"

const Timer1_ConfigType Timer1_Configuration = {
	TimerConf_INITIAL_VALUE,TimerConf_TICK,TimerConf_TOP,TimerConf_DUTY_CYCLE_A,\
	TimerConf_DUTY_CYCLE_B,TimerConf_CLOCK,TimerConf_OC1_A_MODE,TimerConf_OC1_B_MODE,\
	TimerConf_MODE_OF_OPERATION
	};
