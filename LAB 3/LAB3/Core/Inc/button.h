/*
 * button.h
 *
 *  Created on: Dec 12, 2024
 *      Author: Admin
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"
#include "global.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET
#define NUM_BUTTON		3

extern int button_flag[3];
extern int BUTTON[3];

int isButtonPressed(int);
void getKeyInput();

#endif /* INC_BUTTON_H_ */
