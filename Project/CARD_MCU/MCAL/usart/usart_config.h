/*
 * usart_config.h
 *
 * Created: 4/23/2023 3:50:10 AM
 *  Author: sharpel
 */ 


#ifndef USART_CONFIG_H_
#define USART_CONFIG_H_

#include "usart_private.h"

#define F_CPU        8000000UL
#define BAUDRATE     9600

//#define DOUBLESPEED  1
#ifndef DOUBLESPEED
#define BAUD_PRESCALLER       ((F_CPU/(16UL*BAUDRATE))-1)
#else
#define BAUD_PRESCALLER       ((F_CPU/(8UL*BAUDRATE))-1)
#endif

/* USART MODE : 
1-USART_ASYNC_MODE
2-USART_SYNC_MODE
*/
#define USART_SET_MODE             USART_ASYNC_MODE

/* USART PARITY OPTIONS :
1-USART_DIS_PARITY
2-USART_ODD_PARITY
3-USART_EVEN_PARITY
*/
#define USART_SET_PARITY_MODE      USART_DIS_PARITY

/* USART STOP BIT OPTIONS :
1-USART_ONE_STOP_BIT
2-USART_TWO_STOP_BITS
*/
#define USART_SET_STOP_BIT         USART_ONE_STOP_BIT


/* USART Data SIZE OPTIONS :
1-USART_DATA_SIZE_5
2-USART_DATA_SIZE_6
3-USART_DATA_SIZE_7
4-USART_DATA_SIZE_8
5-USART_DATA_SIZE_9
*/
#define USART_SET_DATA_SIZE         USART_DATA_SIZE_8

/* USART Speed MODE :
1-USART_NORMAL_SPEED
2-USART_DOUBLE_SPEED
*/
#define USART_SET_SPEED             USART_NORMAL_SPEED


#endif /* USART_CONFIG_H_ */