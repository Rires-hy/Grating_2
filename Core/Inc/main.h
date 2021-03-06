/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
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
#include "stm32l4xx_hal.h"

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
#define XCLK_Pin GPIO_PIN_2
#define XCLK_GPIO_Port GPIOA
#define JOY_UP_Pin GPIO_PIN_3
#define JOY_UP_GPIO_Port GPIOA
#define XDIR_Pin GPIO_PIN_2
#define XDIR_GPIO_Port GPIOB
#define YDIR_Pin GPIO_PIN_8
#define YDIR_GPIO_Port GPIOE
#define Z__Pin GPIO_PIN_10
#define Z__GPIO_Port GPIOE
#define Z__EXTI_IRQn EXTI15_10_IRQn
#define Z_E11_Pin GPIO_PIN_11
#define Z_E11_GPIO_Port GPIOE
#define Z_E11_EXTI_IRQn EXTI15_10_IRQn
#define Y__Pin GPIO_PIN_12
#define Y__GPIO_Port GPIOE
#define Y__EXTI_IRQn EXTI15_10_IRQn
#define Y_E13_Pin GPIO_PIN_13
#define Y_E13_GPIO_Port GPIOE
#define Y_E13_EXTI_IRQn EXTI15_10_IRQn
#define X__Pin GPIO_PIN_14
#define X__GPIO_Port GPIOE
#define X__EXTI_IRQn EXTI15_10_IRQn
#define X_E15_Pin GPIO_PIN_15
#define X_E15_GPIO_Port GPIOE
#define YCLK_Pin GPIO_PIN_0
#define YCLK_GPIO_Port GPIOD
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
