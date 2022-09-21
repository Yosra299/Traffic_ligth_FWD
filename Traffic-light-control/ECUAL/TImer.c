/*
 * TImer.c
 *
 *  Created on: Oct 9, 2021
 *      Author: yosra
 */

#include "../Utilities/Mem_Map32.h"
#include "Timer.h"
#include "../Utilities/Utils.h"



void TIMER_Mode(WAVEFORM wave)
{
	switch (wave)
		{
		case TIMER_Normal:
			CLEAR_BIT(TCCR0,WGM01);
			CLEAR_BIT(TCCR0,WGM00);
			break;
		case TIMER_PWM_PHASE:
			CLEAR_BIT(TCCR0,WGM01);
			SET_BIT(TCCR0,WGM00);
			break;
		case TIMER_CTC:
			SET_BIT(TCCR0,WGM01);
			CLEAR_BIT(TCCR0,WGM00);
			break;
		case TIMER_Fast_PWM:
			SET_BIT(TCCR0,WGM01);
			SET_BIT(TCCR0,WGM00);
		}

}

void TIMER_Start_Value(int start)
{
	TCNT0=start;
}


void TIMER_Count_Reset()
{
	TCNT0=0x00;
}

void TIMER_OverFlow()
{
	while(!(TIFR & (1<<0)));
}

void TIMER_Clear_OverFlow()
{
	CLEAR_BIT(TIFR,0);
}


void TIMER_Clock_Select(timer_clock_select clock)
{
	switch (clock)
		{
		case TIMER_No_clock_source:
			CLEAR_BIT(TCCR0,CS00);
			CLEAR_BIT(TCCR0,CS01);
			CLEAR_BIT(TCCR0,CS02);
			break;
		case TIMER_No_prescaling:
			SET_BIT(TCCR0,CS00);
			CLEAR_BIT(TCCR0,CS01);
			CLEAR_BIT(TCCR0,CS02);
			break;
		case TIMER_prescaler_8:
			CLEAR_BIT(TCCR0,CS00);
			SET_BIT(TCCR0,CS01);
			CLEAR_BIT(TCCR0,CS02);
			break;
		case TIMER_prescaler_64:
			SET_BIT(TCCR0,CS00);
			SET_BIT(TCCR0,CS01);
			CLEAR_BIT(TCCR0,CS02);
			break;
		case TIMER_prescaler_256:
			CLEAR_BIT(TCCR0,CS00);
			CLEAR_BIT(TCCR0,CS01);
			SET_BIT(TCCR0,CS02);
			break;
		case TIMER_prescaler_1024:
			SET_BIT(TCCR0,CS00);
			CLEAR_BIT(TCCR0,CS01);
			SET_BIT(TCCR0,CS02);
			break;
		case TIMER_Clock_on_falling_edge:
			CLEAR_BIT(TCCR0,CS00);
			SET_BIT(TCCR0,CS01);
		    SET_BIT(TCCR0,CS02);
			break;
		case TIMER_Clock_on_rising_edge:
			SET_BIT(TCCR0,CS00);
			SET_BIT(TCCR0,CS01);
			SET_BIT(TCCR0,CS02);
			break;
		}
}
