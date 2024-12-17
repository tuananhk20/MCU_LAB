/*
 * leg7_seg.h
 *
 *  Created on: Dec 10, 2024
 *      Author: Admin
 */

#ifndef INC_LEG7_SEG_H_
#define INC_LEG7_SEG_H_

#include "main.h"
#include "global.h"

void display7SEG_horizontal(int num);
void display7SEG_vertical(int num);
void update7SEG(int index);
void updateBuffer();
void countdown7SEG();
void Led7SEG_YR();
void Led7SEG_GR();
void Led7SEG_RY();
void Led7SEG_RG();
void display7SEG();


#endif /* INC_LEG7_SEG_H_ */
