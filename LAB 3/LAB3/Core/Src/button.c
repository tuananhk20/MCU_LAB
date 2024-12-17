/*
 * button.c
 *
 *  Created on: Dec 10, 2024
 *      Author: Admin
 */


#include "button.h"

int KeyReg0[NUM_BUTTON] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg1[NUM_BUTTON] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg2[NUM_BUTTON] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg3[NUM_BUTTON] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};

int BUTTON[3]= {BUT1, BUT2, BUT3};
int TimeOutForKeyPress[NUM_BUTTON] = {500, 500, 500};
int button_long_pressed[NUM_BUTTON] = {0, 0, 0};
int button_flag[NUM_BUTTON] = {0, 0, 0};

int isButtonPressed(int index){
	if(button_flag[index] == 1){
		button_flag[index] = 0;
		return 1;
	}
	return 0;
}

int isButtonLongPressed(int index){
	if(button_long_pressed[index] == 1){
		button_long_pressed[index] = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess(int index){

	button_flag[index] = 1;
}

void getKeyInput(){
	for (int i = 0; i < NUM_BUTTON; i++) {
		KeyReg2[i] = KeyReg1[i];
		KeyReg1[i] = KeyReg0[i];
		KeyReg0[i] = HAL_GPIO_ReadPin(GPIOA, BUTTON[i]);

		if ((KeyReg1[i] == KeyReg0[i]) && (KeyReg1[i] == KeyReg2[i])) {
			if (KeyReg2[i] != KeyReg3[i]) {
				KeyReg3[i] = KeyReg2[i];

				if (KeyReg3[i] == PRESSED_STATE) {
					TimeOutForKeyPress[i] = 200;
					subKeyProcess(i);
				}

			} else {
				TimeOutForKeyPress[i]--;
				if (TimeOutForKeyPress[i] == 0) {
					TimeOutForKeyPress[i] = 200;
					if (KeyReg3[i] == PRESSED_STATE) {
						subKeyProcess(i);
					}
				}
			}
		}
	}
}
