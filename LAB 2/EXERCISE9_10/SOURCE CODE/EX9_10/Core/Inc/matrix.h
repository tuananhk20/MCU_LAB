/*
 * matrix.h
 *
 *  Created on: Dec 12, 2024
 *      Author: Admin
 */

#ifndef INC_MATRIX_H_
#define INC_MATRIX_H_

#include "main.h"

void shiftingLedMatrixVeritcally(uint8_t data, int shiftIndex);
void writeLEDMatrixRow(uint8_t data);
void updateLEDMatrix(int index);
void clearLEDMatrixCol();
void clearLEDMatrixRow();

#endif /* INC_MATRIX_H_ */
