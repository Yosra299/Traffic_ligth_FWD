/*
 * LED.c
 *
 *  Created on: Sep 26, 2021
 *      Author: yosra
 */
#include "LED.h"
#include "../Utilities/Mem_Map32.h"
#include "../Utilities/Utils.h"

int LED_Init (enLED_Number ledno )
{
	if(ledno>6)return ERROR_FAIL;
	else
	{
		switch(ledno)
		{
		case LED_RED:
			GPIO_InitPin(LEDRED_PORT,LEDRED_PIN,GPIO_OUTPUT);
			break;
		case LED_GREEN:
			GPIO_InitPin(LEDGREEN_PORT,LEDGREEN_PIN,GPIO_OUTPUT);
			break;
		case LED_BLUE:
			GPIO_InitPin(LEDBLUE_PORT,LEDBLUE_PIN,GPIO_OUTPUT);
			break;
		case LED_YELLOW:
			GPIO_InitPin(LEDYELLOW_PORT,LEDYELLOW_PIN,GPIO_OUTPUT);
			break;
		case MAN_LEDRED:
			GPIO_InitPin(MAN_LEDRED_PORT,MAN_LEDRED_PIN,GPIO_OUTPUT);
			break;
		case MAN_LEDGRN:
			GPIO_InitPin(MAN_LEDGRN_PORT,MAN_LEDGRN_PIN,GPIO_OUTPUT);
			break;
		case MAN_LEDYLW:
			GPIO_InitPin(MAN_LEDYLW_PORT,MAN_LEDYLW_PIN,GPIO_OUTPUT);
			break;
		}

	}

	return SUCCESS;
}

int LED_ON (enLED_Number ledno )
{
	if(ledno>6)return ERROR_FAIL;
	else
	{
		switch(ledno)
		{
		case LED_RED:
			GPIO_WritePin(LEDRED_PORT,LEDRED_PIN,GPIO_HIGH);
			break;
		case LED_GREEN:
			GPIO_WritePin(LEDGREEN_PORT,LEDGREEN_PIN,GPIO_HIGH);
			break;
		case LED_BLUE:
			GPIO_WritePin(LEDBLUE_PORT,LEDBLUE_PIN,GPIO_HIGH);
			break;
		case LED_YELLOW:
			GPIO_WritePin(LEDYELLOW_PORT,LEDYELLOW_PIN,GPIO_HIGH);
			break;
		case MAN_LEDRED:
			GPIO_WritePin(MAN_LEDRED_PORT,MAN_LEDRED_PIN,GPIO_HIGH);
			break;
		case MAN_LEDGRN:
			GPIO_WritePin(MAN_LEDGRN_PORT,MAN_LEDGRN_PIN,GPIO_HIGH);
			break;
		case MAN_LEDYLW:
			GPIO_WritePin(MAN_LEDYLW_PORT,MAN_LEDYLW_PIN,GPIO_HIGH);
			break;
		}

	}

	return SUCCESS;
}

int LED_OFF (enLED_Number ledno )
{
	if(ledno>6)return ERROR_FAIL;
	else
	{
		switch(ledno)
		{
		case LED_RED:
			GPIO_WritePin(LEDRED_PORT,LEDRED_PIN,GPIO_LOW);
			break;
		case LED_GREEN:
			GPIO_WritePin(LEDGREEN_PORT,LEDGREEN_PIN,GPIO_LOW);
			break;
		case LED_BLUE:
			GPIO_WritePin(LEDBLUE_PORT,LEDBLUE_PIN,GPIO_LOW);
			break;
		case LED_YELLOW:
			GPIO_WritePin(LEDYELLOW_PORT,LEDYELLOW_PIN,GPIO_LOW);
			break;
		case MAN_LEDRED:
			GPIO_WritePin(MAN_LEDRED_PORT,MAN_LEDRED_PIN,GPIO_LOW);
			break;
		case MAN_LEDGRN:
			GPIO_WritePin(MAN_LEDGRN_PORT,MAN_LEDGRN_PIN,GPIO_LOW);
			break;
		case MAN_LEDYLW:
			GPIO_WritePin(MAN_LEDYLW_PORT,MAN_LEDYLW_PIN,GPIO_LOW);
			break;
		}

	}

	return SUCCESS;
}






























