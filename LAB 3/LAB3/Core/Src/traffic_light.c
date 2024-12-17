/*
 * traffic_light.c
 *
 *  Created on: Dec 12, 2024
 *      Author: Admin
 */


#include "traffic_light.h"

void toggleLedRed(){
	HAL_GPIO_TogglePin(GPIOA, LED_RED_Pin);
}

void toggleAllRed(){
	HAL_GPIO_WritePin(GPIOA, YELLOWB_Pin | GREENB_Pin | YELLOWA_Pin| GREENA_Pin, GPIO_PIN_RESET);
	HAL_GPIO_TogglePin(GPIOA, REDA_Pin | REDB_Pin);
}

void toggleAllGreen(){
	HAL_GPIO_WritePin(GPIOA, YELLOWB_Pin | REDB_Pin | YELLOWA_Pin| REDA_Pin, GPIO_PIN_RESET);
	HAL_GPIO_TogglePin(GPIOA, GREENA_Pin | GREENB_Pin);
}

void toggleAllYellow(){
	HAL_GPIO_WritePin(GPIOA, REDB_Pin | GREENB_Pin | REDA_Pin| GREENA_Pin, GPIO_PIN_RESET);
	HAL_GPIO_TogglePin(GPIOA, YELLOWA_Pin | YELLOWB_Pin);
}

//den noi 1 chan voi dat, chan tin hieu noi voi tin hieu nen set la den sang
void setRedAGreenB()
{
	HAL_GPIO_WritePin(GPIOA, REDA_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, YELLOWA_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GREENA_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, REDB_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, YELLOWB_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GREENB_Pin, GPIO_PIN_SET);
}

void setRedAYellowB()
{
	HAL_GPIO_WritePin(GPIOA, REDA_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, YELLOWA_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GREENA_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, REDB_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, YELLOWB_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GREENB_Pin, GPIO_PIN_RESET);
}

void setGreenARedB()
{
	HAL_GPIO_WritePin(GPIOA, REDA_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, YELLOWA_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GREENA_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, REDB_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, YELLOWB_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GREENB_Pin, GPIO_PIN_RESET);
}

void setYellowARedB()
{
	HAL_GPIO_WritePin(GPIOA, REDA_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, YELLOWA_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GREENA_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, REDB_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, YELLOWB_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GREENB_Pin, GPIO_PIN_RESET);
}

//tat 3 den va 2 den
void OffAllLed()
{
	HAL_GPIO_WritePin(GPIOA, REDB_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, YELLOWB_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GREENB_Pin, GPIO_PIN_RESET);

	HAL_GPIO_WritePin(GPIOA, REDA_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, YELLOWA_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GREENA_Pin, GPIO_PIN_RESET);
}

void offGreenYellow()
{
	HAL_GPIO_WritePin(GPIOA, YELLOWB_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GREENB_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, YELLOWA_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GREENA_Pin, GPIO_PIN_RESET);
}

void offGreenRed()
{
	HAL_GPIO_WritePin(GPIOA, GREENB_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, REDB_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GREENA_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, REDA_Pin, GPIO_PIN_RESET);
}

void offRedYellow()
{
	HAL_GPIO_WritePin(GPIOA, YELLOWB_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, REDB_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, YELLOWA_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, REDA_Pin, GPIO_PIN_RESET);
}