/*
 * traffic_light.h
 *
 *  Created on: Dec 12, 2024
 *      Author: Admin
 */

#ifndef INC_TRAFFIC_LIGHT_H_
#define INC_TRAFFIC_LIGHT_H_

#include "global.h"
#include "main.h"
#include "software_timer.h"

void toggleLedRed();
void toggleAllRed();
void toggleAllGreen();
void toggleAllYellow();

void setRedAGreenB();
void setRedAYellowB();
void setGreenARedB();
void setYellowARedB();

void OffAllLed();

void offGreenYellow();
void offGreenRed();
void offRedYellow();

#endif /* INC_TRAFFIC_LIGHT_H_ */
