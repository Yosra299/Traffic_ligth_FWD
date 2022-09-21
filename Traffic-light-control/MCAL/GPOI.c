/*
 * GPOI.c
 *
 *  Created on: Sep 25, 2021
 *      Author: yosra
 */
#include "GPIO.h"
#include "../Utilities/Mem_Map32.h"
#include "../Utilities/Utils.h"
uint8 GPIO_InitPin(uint8 port,uint8 pin,uint8 dirction)
{
	uint8 ret= SUCCESS;
	if(port>3 || pin>7 || dirction>1 )
	ret=ERROR_FAIL;

	else{

		switch(port)
		{
		case GPIO_A:
			if(dirction == GPIO_OUTPUT)
			{
				SET_BIT(DDRA,pin);
			}
			else
			{
				CLEAR_BIT(DDRA,pin);
			}
			break;
		case GPIO_B:
			if(dirction == GPIO_OUTPUT)
			{
				SET_BIT(DDRB,pin);
			}
			else
			{
				CLEAR_BIT(DDRB,pin);
			}
			break;
		case GPIO_C:
			if(dirction == GPIO_OUTPUT)
			{
				SET_BIT(DDRC,pin);
			}
			else
			{
				CLEAR_BIT(DDRC,pin);
			}
			break;
		case GPIO_D:
			if(dirction == GPIO_OUTPUT)
			{
				SET_BIT(DDRD,pin);
			}
			else
			{
				CLEAR_BIT(DDRD,pin);
			}
			break;

		}
		ret= SUCCESS;


	}
	return ret;
}

uint8 GPIO_WritePin(uint8 port,uint8 pin,uint8 value)
{
	uint8 ret= SUCCESS;
	if(port>3 || pin>7 || value>1 )
	ret =ERROR_FAIL;

	else{

		switch(port)
		{
		case GPIO_A:
			if(value == GPIO_HIGH)
			{
				SET_BIT(PORTA,pin);
			}
			else
			{
				CLEAR_BIT(PORTA,pin);
			}
			break;
		case GPIO_B:
			if(value == GPIO_HIGH)
			{
				SET_BIT(PORTB,pin);
			}
			else
			{
				CLEAR_BIT(PORTB,pin);
			}
			break;
		case GPIO_C:
			if(value == GPIO_HIGH)
			{
				SET_BIT(PORTC,pin);
			}
			else
			{
				CLEAR_BIT(PORTC,pin);
			}
			break;
		case GPIO_D:
			if(value == GPIO_HIGH)
			{
				SET_BIT(PORTD,pin);
			}
			else
			{
				CLEAR_BIT(PORTD,pin);
			}

		}
		ret= SUCCESS;


	}
	return ret;
}

uint8 GPIO_GetPin(uint8 port,uint8 pin)
{

	uint8 ret_val =0;
	switch(port)
	{
	case GPIO_A:
		ret_val=GET_BIT(PINA,pin);
		break;
	case GPIO_B:
		ret_val=GET_BIT(PINB,pin);
		break;
	case GPIO_C:
		ret_val=GET_BIT(PINC,pin);
		break;
	case GPIO_D:
		ret_val=GET_BIT(PIND,pin);
		break;
	}
	return ret_val;
}
