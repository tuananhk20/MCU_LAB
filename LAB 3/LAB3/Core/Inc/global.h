/*
 * global.h
 *
 *  Created on: Dec 10, 2024
 *      Author: Admin
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "main.h"
#include "software_timer.h"
#include "leg7_seg.h"
#include "traffic_light.h"

#define BUT1 BUT1_Pin
#define BUT2 BUT2_Pin
#define BUT3 BUT3_Pin


//init
#define INIT 0

//mode
#define MOD_AUTO 1
#define MOD_GREEN 3
#define MOD_RED 2
#define MOD_YELLOW 4


#define AUTO_RED 10
#define AUTO_GREEN 11
#define AUTO_YELLOW 12

//mode binhthuong (auto)
#define RED_GREEN 20
#define RED_YELLOW 21
#define GREEN_RED 22
#define YELLOW_RED 23

extern int mode;
extern int num;
extern int TIME_RED;
extern int TIME_YELLOW;
extern int TIME_GREEN;
extern int status;
extern int status_system;

extern int TIME_RED_tmp;
extern int TIME_YELLOW_tmp;
extern int TIME_GREEN_tmp;

extern int indexBuffer;
extern int led_buffer[];

#endif /* INC_GLOBAL_H_ */
