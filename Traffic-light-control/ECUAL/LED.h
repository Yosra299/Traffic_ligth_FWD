/*
 * LED.h
 *
 *  Created on: Sep 26, 2021
 *      Author: yosra
 */

#ifndef LED_H_
#define LED_H_

#include "../MCAL/GPIO.h"

typedef enum
{
	LED_RED,
	LED_GREEN,
	LED_BLUE,
	LED_YELLOW,
	MAN_LEDRED,
	MAN_LEDGRN,
	MAN_LEDYLW

}enLED_Number;

#define LEDRED_PORT     GPIO_B
#define LEDRED_PIN      GPIO_PIN7

#define LEDGREEN_PORT     GPIO_A
#define LEDGREEN_PIN      GPIO_PIN4

#define LEDBLUE_PORT     GPIO_A
#define LEDBLUE_PIN      GPIO_PIN5

#define LEDYELLOW_PORT    GPIO_A
#define LEDYELLOW_PIN     GPIO_PIN6

#define MAN_LEDRED_PORT     GPIO_A
#define MAN_LEDRED_PIN      GPIO_PIN7

#define MAN_LEDGRN_PORT     GPIO_C
#define MAN_LEDGRN_PIN      GPIO_PIN6

#define MAN_LEDYLW_PORT     GPIO_C
#define MAN_LEDYLW_PIN      GPIO_PIN7

int LED_Init (enLED_Number ledno );
int LED_ON (enLED_Number ledno );
int LED_OFF (enLED_Number ledno );

#endif /* LED_H_ */
