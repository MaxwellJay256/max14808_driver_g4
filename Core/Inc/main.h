/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32g4xx_hal.h"

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
#define PULSE_2N_Pin GPIO_PIN_2
#define PULSE_2N_GPIO_Port GPIOE
#define PULSE_2P_Pin GPIO_PIN_3
#define PULSE_2P_GPIO_Port GPIOE
#define PULSE_3N_Pin GPIO_PIN_4
#define PULSE_3N_GPIO_Port GPIOE
#define PULSE_3P_Pin GPIO_PIN_5
#define PULSE_3P_GPIO_Port GPIOE
#define PULSE_4N_Pin GPIO_PIN_6
#define PULSE_4N_GPIO_Port GPIOE
#define LED_BLUE_Pin GPIO_PIN_0
#define LED_BLUE_GPIO_Port GPIOC
#define LED_GREEN_Pin GPIO_PIN_1
#define LED_GREEN_GPIO_Port GPIOC
#define LED_RED_Pin GPIO_PIN_2
#define LED_RED_GPIO_Port GPIOC
#define MODE0_Pin GPIO_PIN_4
#define MODE0_GPIO_Port GPIOC
#define MODE1_Pin GPIO_PIN_5
#define MODE1_GPIO_Port GPIOC
#define PULSE_4P_Pin GPIO_PIN_7
#define PULSE_4P_GPIO_Port GPIOE
#define PULSE_5N_Pin GPIO_PIN_8
#define PULSE_5N_GPIO_Port GPIOE
#define PULSE_5P_Pin GPIO_PIN_9
#define PULSE_5P_GPIO_Port GPIOE
#define PULSE_6N_Pin GPIO_PIN_10
#define PULSE_6N_GPIO_Port GPIOE
#define PULSE_6P_Pin GPIO_PIN_11
#define PULSE_6P_GPIO_Port GPIOE
#define PULSE_7N_Pin GPIO_PIN_12
#define PULSE_7N_GPIO_Port GPIOE
#define PULSE_7P_Pin GPIO_PIN_13
#define PULSE_7P_GPIO_Port GPIOE
#define PULSE_8N_Pin GPIO_PIN_14
#define PULSE_8N_GPIO_Port GPIOE
#define PULSE_8P_Pin GPIO_PIN_15
#define PULSE_8P_GPIO_Port GPIOE
#define KEY_BOOT0_Pin GPIO_PIN_8
#define KEY_BOOT0_GPIO_Port GPIOB
#define KEY_BOOT0_EXTI_IRQn EXTI9_5_IRQn
#define PULSE_1N_Pin GPIO_PIN_0
#define PULSE_1N_GPIO_Port GPIOE
#define PULSE_1P_Pin GPIO_PIN_1
#define PULSE_1P_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */
#define LED_GPIO_Port GPIOC
#define PULSE_GPIO_Port GPIOE
#define MODE_GPIO_Port GPIOC
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
