 /******************************************************************************
 *
 * Module: Dio
 *
 * File Name: Dio_Cfg.h
 *
 * Description: Pre-Compile Configuration Header file for ATmega32 Microcontroller - Dio Driver
 *
 * Author: Mohanad K. Saeed
 ******************************************************************************/
#ifndef DIO_CFG_H
#define DIO_CFG_H

/* Number of the configured Dio Channels */
#define DIO_CONFIGURED_CHANNLES              (7U)

/* Channel Index in the array of structures in Dio_PBcfg.c */
#define DioConf_SW1_CHANNEL_ID_INDEX         (Dio_ChannelType)0
#define DioConf_LED1_CHANNEL_ID_INDEX        (Dio_ChannelType)1
#define DioConf_LED2_CHANNEL_ID_INDEX        (Dio_ChannelType)2
#define DioConf_LED3_CHANNEL_ID_INDEX        (Dio_ChannelType)3
#define DioConf_LED4_CHANNEL_ID_INDEX        (Dio_ChannelType)4
#define DioConf_LED5_CHANNEL_ID_INDEX        (Dio_ChannelType)5
#define DioConf_LED6_CHANNEL_ID_INDEX        (Dio_ChannelType)6

/* DIO Configured Port ID's  */
#define DioConf_SW1_PORT_NUM                 (Dio_PortType)DIO_PORTD
#define DioConf_LED1_PORT_NUM                (Dio_PortType)DIO_PORTA
#define DioConf_LED2_PORT_NUM                (Dio_PortType)DIO_PORTA
#define DioConf_LED3_PORT_NUM                (Dio_PortType)DIO_PORTA
#define DioConf_LED4_PORT_NUM                (Dio_PortType)DIO_PORTB
#define DioConf_LED5_PORT_NUM                (Dio_PortType)DIO_PORTB
#define DioConf_LED6_PORT_NUM                (Dio_PortType)DIO_PORTB

/* DIO Configured Channel ID's */
#define DioConf_SW1_CHANNEL_NUM              (Dio_ChannelType)DIO_PIN2 /* Pin 2 in PORTD */
#define DioConf_LED1_CHANNEL_NUM             (Dio_ChannelType)DIO_PIN0 /* Pin 0 in PORTA */
#define DioConf_LED2_CHANNEL_NUM             (Dio_ChannelType)DIO_PIN1 /* Pin 1 in PORTA */
#define DioConf_LED3_CHANNEL_NUM             (Dio_ChannelType)DIO_PIN2 /* Pin 2 in PORTA */
#define DioConf_LED4_CHANNEL_NUM             (Dio_ChannelType)DIO_PIN0 /* Pin 0 in PORTB */
#define DioConf_LED5_CHANNEL_NUM             (Dio_ChannelType)DIO_PIN1 /* Pin 1 in PORTB */
#define DioConf_LED6_CHANNEL_NUM             (Dio_ChannelType)DIO_PIN2 /* Pin 2 in PORTB */

/* DIO Configured Channel Direction */
#define DioConf_SW1_CHANNEL_DIRECTION         (Dio_PinDirectionType)PIN_IN
#define DioConf_LED1_CHANNEL_DIRECTION        (Dio_PinDirectionType)PIN_OUT
#define DioConf_LED2_CHANNEL_DIRECTION        (Dio_PinDirectionType)PIN_OUT
#define DioConf_LED3_CHANNEL_DIRECTION        (Dio_PinDirectionType)PIN_OUT
#define DioConf_LED4_CHANNEL_DIRECTION        (Dio_PinDirectionType)PIN_OUT
#define DioConf_LED5_CHANNEL_DIRECTION        (Dio_PinDirectionType)PIN_OUT
#define DioConf_LED6_CHANNEL_DIRECTION        (Dio_PinDirectionType)PIN_OUT

/* DIO Configured Channel Pull Up */
#define DioConf_SW1_CHANNEL_PULL_UP           (Dio_PinPullUp)DISABLE_PULL_UP
#define DioConf_LED1_CHANNEL_PULL_UP          (Dio_PinPullUp)DISABLE_PULL_UP
#define DioConf_LED2_CHANNEL_PULL_UP          (Dio_PinPullUp)DISABLE_PULL_UP
#define DioConf_LED3_CHANNEL_PULL_UP          (Dio_PinPullUp)DISABLE_PULL_UP
#define DioConf_LED4_CHANNEL_PULL_UP          (Dio_PinPullUp)DISABLE_PULL_UP
#define DioConf_LED5_CHANNEL_PULL_UP          (Dio_PinPullUp)DISABLE_PULL_UP
#define DioConf_LED6_CHANNEL_PULL_UP          (Dio_PinPullUp)DISABLE_PULL_UP

#endif /* DIO_CFG_H */
