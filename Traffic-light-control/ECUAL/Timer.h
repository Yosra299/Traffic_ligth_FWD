/*
 * Timer.h
 *
 *  Created on: Oct 9, 2021
 *      Author: yosra
 */

#ifndef TIMER_H_
#define TIMER_H_
#include "../MCAL/GPIO.h"


#define WGM00 6
#define CS00  0
#define CS01  1
#define CS02  2
#define WGM01 3

typedef enum
{
	TIMER_No_clock_source,
	TIMER_No_prescaling,
	TIMER_prescaler_8,
	TIMER_prescaler_64,
	TIMER_prescaler_256,
	TIMER_prescaler_1024,
	TIMER_Clock_on_falling_edge,
	TIMER_Clock_on_rising_edge
}timer_clock_select;

typedef enum
{
	TIMER_Normal,
	TIMER_PWM_PHASE,
	TIMER_CTC,
	TIMER_Fast_PWM
}WAVEFORM;

typedef enum
{
	TIMER_TOV0,
	TIMER_OCF0
}INTRUPT_TYPE;



void TIMER_Mode(WAVEFORM wave);
void TIMER_Start_Value(int start);
void TIMER_Interrupt();
void TIMER_Clock_Select(timer_clock_select clock);
void TIMER_OverFlow();
void TIMER_Clear_OverFlow();

#endif /* TIMER_H_ */
