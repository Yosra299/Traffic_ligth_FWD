/*
 * BOTTON.h
 *
 *  Created on: Sep 26, 2021
 *      Author: yosra
 */

#ifndef BOTTON_H_
#define BOTTON_H_

#include "../MCAL/GPIO.h"

typedef enum
{
	SW1,
	SW2,
	SW3,
	SW4,
}enSWITCH_NUM;

#define SW1_COL_PORT    GPIO_D
#define SW2_COL_PORT    GPIO_D
#define SW3_COL_PORT    GPIO_D
#define SW4_COL_PORT    GPIO_D

#define SW1_COL_PIN    GPIO_PIN7
#define SW2_COL_PIN    GPIO_PIN6
#define SW3_COL_PIN    GPIO_PIN5
#define SW4_COL_PIN    GPIO_PIN3

#define SW_ON   0
#define SW_OFF  1

void SWITCH_Init(enSWITCH_NUM swtch_Num);

uint8 SWITCH_STATE(enSWITCH_NUM swtch_Num);



#endif /* BOTTON_H_ */
