/*
 * app.c
 *
 *  Created on: Sep 10, 2022
 *      Author: yosra
 */

#include "../Utilities/Mem_Map32.h"
#include "../Utilities/Utils.h"
#include "../ECUAL/LED.h"
#include "../ECUAL/BOTTON.h"
#include "../ECUAL/Timer.h"
#include "app.h"


extern volatile uint8 KeyPressed;
uint8 State;
uint8 NOT_GREEN;
extern volatile uint32 tState;
void APP_Init()
{
	// Car led init
	LED_Init(LED_RED);
	LED_Init(LED_YELLOW);
	LED_Init(LED_GREEN);

	// Man led init
	LED_Init(MAN_LEDGRN);
	LED_Init(MAN_LEDRED);
	LED_Init(MAN_LEDYLW);

	//-------------
	State = ST_GRN;
	tState = 0;
	KeyPressed = 0;
	NOT_GREEN =1;
	//-------------

	// BTN init
	SWITCH_Init(SW4);
	SETUP_INT1_TRG();
	SETUP_INT1();

	// Timer init
    TIMER_Mode(TIMER_CTC);
    OCR0 = 250;
    SET_BIT(TIMSK,OCIE0); // Enable timer 0 interrupt
	TIMER_Clock_Select(TIMER_prescaler_64);

	// Interrupt init
	sei();
}

void APP_ON()
{

	while (1)
	{
		//if(!tState && !KeyPressed)
		if(!tState)
		{
			switch(State)
			{
			case ST_RED:
				StateSetRed();
				break;
			case ST_YLW:
				StateSetYlw();
				break;
			case ST_GRN:
				StateSetGrn();
				break;
			case ST_NY:
				NEW_YEL();
				break;
			}
		}
		if(KeyPressed && NOT_GREEN)
		{

			LED_OFF(LED_GREEN);
			LED_OFF(LED_RED);

			LED_OFF(MAN_LEDRED);
			LED_OFF(MAN_LEDGRN);

			LED_ON(LED_YELLOW);
			LED_ON(MAN_LEDYLW);

			tState = TST_ON_CROSS;


			State = ST_NY;

			KeyPressed = 0;
		}
	}
}

void StateSetRed(void)
{
	LED_OFF(LED_RED);
	LED_OFF(MAN_LEDGRN);
	LED_ON(LED_YELLOW);
	LED_ON(MAN_LEDYLW);
	NOT_GREEN=1;
	State = ST_YLW;
	tState = TST_YLW;
}

void StateSetYlw(void)
{
	LED_OFF(LED_YELLOW);
	LED_OFF(MAN_LEDYLW);
	LED_ON(LED_GREEN);
	LED_ON(MAN_LEDRED);

	State = ST_GRN;
	tState = TST_GRN;
}

void StateSetGrn(void)
{
	LED_OFF(LED_GREEN);
	LED_OFF(MAN_LEDRED);
	LED_ON(LED_YELLOW);
	LED_ON(MAN_LEDYLW);

	State = ST_NY;
	tState = TST_RED;
}


void  NEW_YEL(void)
{
	 LED_OFF(LED_YELLOW);
	 LED_OFF(MAN_LEDYLW);
	 LED_ON(LED_RED);
	 LED_ON(MAN_LEDGRN);
	 NOT_GREEN=0;
	 State =ST_RED;
	 tState = TST_RED;

}

