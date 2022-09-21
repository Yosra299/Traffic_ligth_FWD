/*
 * main.c
 *
 *  Created on: Sep 10, 2022
 *      Author: yosra
 */
#include "ECUAL/LED.h"
#include "ECUAL/BOTTON.h"
#include "ECUAL/Timer.h"
#include "App/app.h"
#include "Utilities/Mem_Map32.h"
#include "Utilities/Utils.h"


volatile uint8 KeyPressed;
volatile uint32 tState;

ISR(INT1_vect)
{
	if(!KeyPressed)
	{
		/*
		if(GET_BIT(PIND, SW4))
		{
			KeyPressed = 1;
		}
		*/
		KeyPressed = 1;
	}
}

ISR(TIMER0_COMP_vect)
{
	// 1ms passed..
	if(tState)
	{
		tState--;
	}
}

int main()
{
	APP_Init();

	APP_ON();
}

