/*
 * BOTTON.c
 *
 *  Created on: Sep 26, 2021
 *      Author: yosra
 */
#include"BOTTON.h"
#include "../Utilities/Utils.h"

void SWITCH_Init(enSWITCH_NUM swtch_Num)
{
	switch(swtch_Num)
	{
	case SW1:
		GPIO_InitPin(SW1_COL_PORT,SW1_COL_PIN,GPIO_INPUT);
		break;
	case SW2:
		GPIO_InitPin(SW2_COL_PORT,SW2_COL_PIN,GPIO_INPUT);
		break;
	case SW3:
		GPIO_InitPin(SW3_COL_PORT,SW3_COL_PIN,GPIO_INPUT);
		break;
	case SW4:
		GPIO_InitPin(SW4_COL_PORT,SW4_COL_PIN,GPIO_INPUT);
		break;
	}
}

uint8 SWITCH_STATE(enSWITCH_NUM swtch_Num)
{
	switch(swtch_Num)
	{
	case SW1:
		return GET_BIT(SW1_COL_PORT, SW1_COL_PIN);
	case SW2:
		return GET_BIT(SW2_COL_PORT, SW2_COL_PIN);
	case SW3:
		return GET_BIT(SW3_COL_PORT, SW3_COL_PIN);
	case SW4:
		return GET_BIT(SW4_COL_PORT, SW4_COL_PIN);
	default:
		return 0;
	}
}
