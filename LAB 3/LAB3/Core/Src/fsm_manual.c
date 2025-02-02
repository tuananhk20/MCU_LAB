/*
 * fsm_manual.c
 *
 *  Created on: Dec 10, 2024
 *      Author: Admin
 */

#include "fsm_manual.h"
#include "fsm_automatic.h"

void modifyMode(int temp){
	switch(num){
	case 0:
		num = 1;
		setTimer4(250);
		break;
	case 1:
		update7SEG(0);
    	display7SEG_horizontal(mode/10);
        display7SEG_vertical(temp/10);
		if(timer_flag4 == 1){
			setTimer4(250);
			num = 2;
		}
		break;
	case 2:
		update7SEG(1);
    	display7SEG_horizontal(mode%10);
        display7SEG_vertical(temp%10);
		if(timer_flag4 == 1){
			setTimer4(250);
			num = 1;
		}
		break;
	default:
		break;

	}
}


void fsm_manual(){
	  if(timer_flag10 == 1){
		  toggleLedRed();
		  setTimer10(1000);
	  }
	switch(mode){
		case MOD_AUTO:
			fsm_automatic();
			if(isButtonPressed(0) == 1){
			mode = MOD_RED;
			setTimer3(500);
			}
			break;
		case MOD_RED:
			modifyMode(TIME_RED_tmp);
			if(timer_flag3 == 1){
				toggleAllRed();
				setTimer3(500);
			}

			if(isButtonPressed(0) == 1){
				mode = MOD_YELLOW;
				setTimer3(500);
			}

			if(isButtonPressed(1) == 1){
				TIME_RED_tmp++;
				if(TIME_RED_tmp > 99){
					TIME_RED_tmp = 1;
				}
			}

			if(isButtonPressed(2) == 1){
				TIME_RED = TIME_RED_tmp;
			}
			break;
		case MOD_YELLOW:
			modifyMode(TIME_YELLOW_tmp);
			if(timer_flag3 == 1){
				toggleAllYellow();
				setTimer3(500);
			}

			if(isButtonPressed(0) == 1){
				mode = MOD_GREEN;
				setTimer4(500);
			}

			if(isButtonPressed(1) == 1){
				TIME_YELLOW_tmp++;
				if(TIME_YELLOW_tmp > 99){
					TIME_YELLOW_tmp = 1;
				}
			}

			if(isButtonPressed(2) == 1){
				TIME_YELLOW = TIME_YELLOW_tmp;
			}
			break;
		case MOD_GREEN:
			modifyMode(TIME_GREEN_tmp);
			if(timer_flag3 == 1){
				toggleAllGreen();
				setTimer3(500);
			}

			if(isButtonPressed(0) == 1){
				mode = MOD_AUTO;
			}

			if(isButtonPressed(1) == 1){
				TIME_GREEN_tmp++;
				if(TIME_GREEN_tmp > 99){
					TIME_GREEN_tmp = 1;
				}
			}

			if(isButtonPressed(2) == 1){
				TIME_GREEN = TIME_GREEN_tmp;
				TIME_RED_tmp = TIME_GREEN_tmp + TIME_YELLOW_tmp;
//				if(TIME_RED_tmp == TIME_GREEN_tmp + TIME_YELLOW_tmp){
					TIME_RED = TIME_RED_tmp;
					TIME_YELLOW = TIME_YELLOW_tmp;
					TIME_GREEN = TIME_GREEN_tmp;
//				}
				updateBuffer();
				status = INIT;
				status_system = 0;
			}
			break;

		default:
			break;
	}
}
