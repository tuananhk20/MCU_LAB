/*
 * global.c
 *
 *  Created on: Dec 10, 2024
 *      Author: Admin
 */
#include "global.h"

int num =0;
int mode = MOD_AUTO;
int status_system = 0;
int status = INIT;
int TIME_RED = 5;
int TIME_YELLOW = 2;
int TIME_GREEN = 3;

int TIME_RED_tmp = 0;
int TIME_YELLOW_tmp = 0;
int TIME_GREEN_tmp = 0;

int indexBuffer = 0;
int led_buffer[6] = {};

