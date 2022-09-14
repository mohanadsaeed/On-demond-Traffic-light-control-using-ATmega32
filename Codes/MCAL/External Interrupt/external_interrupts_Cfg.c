 /******************************************************************************
 *
 * Module: External Interrupts
 *
 * File Name: external_interrupts_Cfg.c
 *
 * Description: Configuration Source file for ATmega32 Microcontroller - External Interrupts Driver
 *
 * Author: Mohanad K. Saeed
 ******************************************************************************/
#include "external_interrupts.h"

#ifdef INTERRUPT0
const Ei_ConfigType Ei_ConfigurationInt0 = {
	INT0_EVENT,INT0_PULL_UP
};
#endif

#ifdef INTERRUPT1
const Ei_ConfigType Ei_ConfigurationInt1 = {
	INT1_EVENT,INT1_PULL_UP
};
#endif

#ifdef INTERRUPT2
const Ei_ConfigType Ei_ConfigurationInt2 = {
	INT2_EVENT,INT2_PULL_UP
};
#endif