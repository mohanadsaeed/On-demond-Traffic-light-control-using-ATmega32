 /******************************************************************************
 *
 * Module: Externals Interrupt
 *
 * File Name: external_interrupts_Cfg.h
 *
 * Description: Pre-Compile Configuration Header file for ATmega32 Microcontroller - External Interrupts Driver
 *
 * Author: Mohanad K. Saeed
 ******************************************************************************/
#ifndef EXTERNAL_INT_CFG_H
#define EXTERNAL_INT_CFG_H

/*Enable Interrupt 0*/
#define INTERRUPT0

#ifdef INTERRUPT0
/*Set Interrupt 0 Event*/
#define INT0_EVENT     (Ei_InterruptEvent)INT_RISING_EDGE
/*Set Interrupt 0 Pin Pull Up*/
#define INT0_PULL_UP   (Ei_PullUp)INT_DEACTIVATE
#endif

#ifdef INTERRUPT1
/*Set Interrupt 1 Event*/
#define INT1_EVENT     (Ei_InterruptEvent)INT_RISING_EDGE
/*Set Interrupt 1 Pin Pull Up*/
#define INT_PULL_UP   (Ei_PullUp)INT_DEACTIVATE
#endif

#ifdef INTERRUPT2
/*Set Interrupt 2 Event*/
#define INT2_EVENT     (Ei_InterruptEvent)INT_RISING_EDGE
/*Set Interrupt 2 Pin Pull Up*/
#define INT2_PULL_UP   (Ei_PullUp)INT_DEACTIVATE
#endif

#endif
