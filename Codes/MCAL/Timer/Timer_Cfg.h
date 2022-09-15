 /******************************************************************************
 *
 * Module: Timer
 *
 * File Name: Timer_Cfg.h
 *
 * Description: Pre-Compile Configuration Header file for ATmega32 Microcontroller - Timer Driver
 *
 * Author: Mohanad K. Saeed
 ******************************************************************************/
#ifndef TIMER_CFG_H
#define TIMER_CFG_H

#define TimerConf_INITIAL_VALUE  		(uint16)0
#define TimerConf_TICK					(uint16)19531
#define TimerConf_DUTY_CYCLE_A			(uint16)
#define TimerConf_DUTY_CYCLE_B			(uint16)
#define TimerConf_CLOCK					(Timer1_Clock)TIMER1_F_CPU_256
#define TimerConf_OC1_A_MODE			(Timer1_Oc1AMode)OC1_A_DISCONNECT
#define TimerConf_OC1_B_MODE			(Timer1_Oc1BMode)OC1_B_DISCONNECT
#define TimerConf_MODE_OF_OPERATION		(Timer1_ModeOfOperation)TIMER1_CTC

#endif
