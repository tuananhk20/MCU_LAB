/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define CLOCK0_Pin GPIO_PIN_4
#define CLOCK0_GPIO_Port GPIOA
#define CLOCK1_Pin GPIO_PIN_5
#define CLOCK1_GPIO_Port GPIOA
#define CLOCK2_Pin GPIO_PIN_6
#define CLOCK2_GPIO_Port GPIOA
#define CLOCK3_Pin GPIO_PIN_7
#define CLOCK3_GPIO_Port GPIOA
#define CLOCK4_Pin GPIO_PIN_8
#define CLOCK4_GPIO_Port GPIOA
#define CLOCK5_Pin GPIO_PIN_9
#define CLOCK5_GPIO_Port GPIOA
#define CLOCK6_Pin GPIO_PIN_10
#define CLOCK6_GPIO_Port GPIOA
#define CLOCK7_Pin GPIO_PIN_11
#define CLOCK7_GPIO_Port GPIOA
#define CLOCK8_Pin GPIO_PIN_12
#define CLOCK8_GPIO_Port GPIOA
#define CLOCK9_Pin GPIO_PIN_13
#define CLOCK9_GPIO_Port GPIOA
#define CLOCK10_Pin GPIO_PIN_14
#define CLOCK10_GPIO_Port GPIOA
#define CLOCK11_Pin GPIO_PIN_15
#define CLOCK11_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
