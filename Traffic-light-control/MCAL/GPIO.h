/*
 * GPIO.h
 *
 *  Created on: Sep 25, 2021
 *      Author: yosra
 */

#ifndef GPIO_H_
#define GPIO_H_
#include "../Utilities/Sta_types.h"



#define GPIO_A  0
#define GPIO_B  1
#define GPIO_C  2
#define GPIO_D  3

#define GPIO_PIN0  0
#define GPIO_PIN1  1
#define GPIO_PIN2  2
#define GPIO_PIN3  3
#define GPIO_PIN4  4
#define GPIO_PIN5  5
#define GPIO_PIN6  6
#define GPIO_PIN7  7

#define GPIO_OUTPUT 1
#define GPIO_INPUT 0

#define GPIO_HIGH 1
#define GPIO_LOW  0

#define ERROR_FAIL 0
#define SUCCESS 1

/*
 *Name :
 *
 *
 */

uint8 GPIO_InitPin(uint8 port,uint8 pin,uint8 dirction);
/*
 *Name :
 *
 *
 */
uint8 GPIO_WritePin(uint8 port,uint8 pin,uint8 value);
/*
 *Name :
 *
 *
 */
uint8 GPIO_GetPin(uint8 port,uint8 pin);
/*
 *Name :
 *
 *
 */
uint8 GPIO_Toggle(uint8 port,uint8 pin);

#endif /* GPIO_H_ */
