/* -----------------------------------------------------------------------------
[FILE NAME]    :	external_interrupts.h

[AUTHOR]       :	MOHANAD K. SAEED

[DATA CREATED] :	16/02/2021

[DESCRIPTION]  :	Header File to External Interrupts Driver  
--------------------------------------------------------------------------------*/

#ifndef EXTERNAL_INTERRUPTS_H
#define EXTERNAL_INTERRUPTS_H

#include "../../Utilities/std_types.h"
#include "../../Utilities/common_macros.h"
#include "../..//Utilities/micro_config.h"
#include "external_interrupts_Cfg.h"

/* -----------------------------------------------------------------------------
 *                         Types Declaration                                   *
 ------------------------------------------------------------------------------*/
typedef enum
{
	INT_LOW_LEVEL,INT_LOGICAL_CHANGE,INT_FALLING_EDGE,INT_RISING_EDGE
}Ei_InterruptEvent;

typedef enum
{
	INT_DEACTIVATE,INT_ACTIVATE
}Ei_PullUp;

typedef struct
{
	Ei_InterruptEvent interruptevent;
	Ei_PullUp pullup;
}Ei_ConfigType;


/* -----------------------------------------------------------------------------
 *                           Preprocessor                                      *
  -----------------------------------------------------------------------------*/
#define NUM_TO_CLEAR_FIRST_2_BITS 0xFC
#define NUM_TO_CLEAR_LAST_6_BITS 0x2
#define NUM_TO_CLEAR_SECOND_2_BITS 0xF3
#define NUM_TO_CLEAR_2ND_BIT 0xFD
#define NUM_TO_CLEAR_LAST_7_BIT 0x01
#define NUM_TO_CLEAR_3RD_BIT 0xF7
#define NUM_TO_CLEAR_6TH_BIT 0xBF
#define BIT2 2
#define BIT6 6
#define NULL_PTR (void *) 0


/* -----------------------------------------------------------------------------
 *                      Functions Prototypes                                   *
  -----------------------------------------------------------------------------*/

#ifdef INTERRUPT0
/* Function to initialize interrupt registers*/
void INT0_Init(const Ei_ConfigType * Config_Ptr);
/* Function to change the event at which the interrupt will be triggered*/
void INT0_setEvent(const Ei_InterruptEvent a_int0Event);
/* Function to save the of the call back function in a global variable*/
void INT0_setCallBack(void(*a_ptr)(void));
/* Function to de-initialize interrupts registers*/
void INT0_deInit(void);
#endif

#ifdef INTERRUPT1
void INT1_Init(const Ei_ConfigType * Config_Ptr);
void INT1_setEvent(const Ei_InterruptEvent a_int1Event);
void INT1_setCallBack(void(*a_ptr)(void));
void INT1_deInit(void);
#endif

#ifdef INTERRUPT2
void INT2_Init(const Ei_ConfigType * Config_Ptr);
void INT2_setEvent(const Ei_InterruptEvent a_int2Event);
void INT2_setCallBack(void(*a_ptr)(void));
void INT2_deInit(void);
#endif

/* -----------------------------------------------------------------------------
 *                       External Variables                                    *
   ----------------------------------------------------------------------------*/

/* Extern PB structures to be used by External Interrupts and other modules */
extern const Ei_ConfigType Ei_ConfigurationInt0;
extern const Ei_ConfigType Ei_ConfigurationInt1;
extern const Ei_ConfigType Ei_ConfigurationInt2;

#endif
