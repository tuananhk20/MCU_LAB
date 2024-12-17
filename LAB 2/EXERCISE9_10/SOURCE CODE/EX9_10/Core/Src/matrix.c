/*
 * matrix.c
 *
 *  Created on: Dec 12, 2024
 *      Author: Admin
 */

#include "matrix.h"

extern int shifting_index;
extern uint8_t matrix_buffer[8];

void shiftingLedMatrixVeritcally(uint8_t data, int shiftIndex){
	HAL_GPIO_WritePin(GPIOB, ROW0_Pin, data >> shiftIndex & 1);
	shiftIndex ++;
	if(shiftIndex >= 8) shiftIndex = 0;
	HAL_GPIO_WritePin(GPIOB, ROW1_Pin, data >> shiftIndex & 1);
	shiftIndex ++;
	if(shiftIndex >= 8) shiftIndex = 0;
	HAL_GPIO_WritePin(GPIOB, ROW2_Pin, data >> shiftIndex & 1);
	shiftIndex ++;
	if(shiftIndex >= 8) shiftIndex = 0;
	HAL_GPIO_WritePin(GPIOB, ROW3_Pin, data >> shiftIndex & 1);
	shiftIndex ++;
	if(shiftIndex >= 8) shiftIndex = 0;
	HAL_GPIO_WritePin(GPIOB, ROW4_Pin, data >> shiftIndex & 1);
	shiftIndex ++;
	if(shiftIndex >= 8) shiftIndex = 0;
	HAL_GPIO_WritePin(GPIOB, ROW5_Pin, data >> shiftIndex & 1);
	shiftIndex ++;
	if(shiftIndex >= 8) shiftIndex = 0;
	HAL_GPIO_WritePin(GPIOB, ROW6_Pin, data >> shiftIndex & 1);
	shiftIndex ++;
	if(shiftIndex >= 8) shiftIndex = 0;
	HAL_GPIO_WritePin(GPIOB, ROW7_Pin, data >> shiftIndex & 1);
}

void updateLEDMatrix(int index) {
	clearLEDMatrixCol();
	//clearLEDMatrixRow();
	switch (index){
	case 0:
		HAL_GPIO_WritePin(GPIOA, ENM0_Pin, GPIO_PIN_RESET);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOA, ENM1_Pin, GPIO_PIN_RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOA, ENM2_Pin, GPIO_PIN_RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOA, ENM3_Pin, GPIO_PIN_RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOA, ENM4_Pin, GPIO_PIN_RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOA, ENM5_Pin, GPIO_PIN_RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOA, ENM6_Pin, GPIO_PIN_RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOA, ENM7_Pin, GPIO_PIN_RESET);
		break;
	}
	//writeLEDMatrixRow(matrix_buffer[index]);
	shiftingLedMatrixVeritcally(matrix_buffer[index], shifting_index);
}

void writeLEDMatrixRow(uint8_t data){
	HAL_GPIO_WritePin(GPIOB, ROW0_Pin, data >> 0 & 1);
	HAL_GPIO_WritePin(GPIOB, ROW1_Pin, data >> 1 & 1);
	HAL_GPIO_WritePin(GPIOB, ROW2_Pin, data >> 2 & 1);
	HAL_GPIO_WritePin(GPIOB, ROW3_Pin, data >> 3 & 1);
	HAL_GPIO_WritePin(GPIOB, ROW4_Pin, data >> 4 & 1);
	HAL_GPIO_WritePin(GPIOB, ROW5_Pin, data >> 5 & 1);
	HAL_GPIO_WritePin(GPIOB, ROW6_Pin, data >> 6 & 1);
	HAL_GPIO_WritePin(GPIOB, ROW7_Pin, data >> 7 & 1);
}

void clearLEDMatrixCol(){
	HAL_GPIO_WritePin(GPIOA, ENM0_Pin|ENM1_Pin|ENM2_Pin|ENM3_Pin
							|ENM4_Pin|ENM5_Pin|ENM6_Pin|ENM7_Pin, GPIO_PIN_SET);
}

void clearLEDMatrixRow(){
	HAL_GPIO_WritePin(GPIOB, ROW0_Pin|ROW1_Pin|ROW2_Pin|ROW3_Pin
							|ROW4_Pin|ROW5_Pin|ROW6_Pin|ROW7_Pin, GPIO_PIN_SET);
}
