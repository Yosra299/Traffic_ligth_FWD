/*
 * app.h
 *
 *  Created on: Sep 10, 2022
 *      Author: yosra
 */

#ifndef APP_APP_H_
#define APP_APP_H_

#define ST_RED 1
#define ST_GRN 2
#define ST_YLW 3
#define ST_NY 4


#define TST_RED 10000
#define TST_GRN 10000
#define TST_YLW 10000
#define TST_ON_CROSS 3000
#define TST_blink 500

void APP_Init();
void CAR_Delay();
void APP_ON();

//Setup use INT1
#define SETUP_INT1_TRG() SET_BIT(MCUCR, ISC11)
#define SETUP_INT1() SET_BIT(GICR, INT1)

void StateSetRed(void);
void StateSetYlw(void);
void StateSetGrn(void);
void StateSetRedKey(void);
void  NEW_YEL(void);

#endif /* APP_APP_H_ */
