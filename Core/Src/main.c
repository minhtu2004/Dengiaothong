/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
enum ledColor {
	GREEN,
	YELLOW,
	RED
};
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */
  void display7SEG(int num) {
   switch (num) {
  	case 0:
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, 1);
  	break;
  	case 1:
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 1);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 0);
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 1);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 1);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, 1);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, 1);
  	break;
  	case 2:
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, 1);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, 1);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, 0);
  	break;
  	case 3:
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 1);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, 1);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, 0);
  	break;
  	case 4:
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 1);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 1);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 1);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, 0);
  	break;
  	case 5:
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 1);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 1);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, 0);
  	break;
  	case 6:
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 1);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, 0);
  	break;
  	case 7:
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 1);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 1);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, 1);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, 1);
  	break;
  	case 8:
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, 0);
  	break;
  	default:
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 1);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, 0);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, 0);
  	break;
}}


  int c_1s = 100;

  int c_Red1 = 15;
  int c_Green1 = 11;
  int c_Yellow1 = 4;
  enum ledColor cur_color1 = GREEN;

  int c_Red2 = 15;
  int c_Green2 = 11;
  int c_Yellow2 = 4;
  enum ledColor cur_color2 = RED;

  int counter1 = 10;
  int counter2 = 14;

  int sw_led = 0;

  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, 0);
  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, 1);
  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, 0);

  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 1);
  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, 0);
  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, 0);
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */
	   if (c_Green1 <= 0) {
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, 0);
	    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, 1);
		c_Green1 = 11;
		cur_color1 = YELLOW;
		counter1 = 3; }

	   if (c_Yellow1 <= 0) {
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, 1);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, 0);
		c_Yellow1 = 4;
		cur_color1 = RED;
		counter1 = 14; }

	   if (c_Red1 <= 0) {
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, 1);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, 0);
		c_Red1 = 15;
		cur_color1 = GREEN;
		counter1 = 10; }


	   if (c_Green2 <= 0) {
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, 1);
		c_Green2 = 11;
		cur_color2 = YELLOW;
		counter2 = 3; }

	   if (c_Yellow2 <= 0) {
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 1);
	    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, 0);
		c_Yellow2 = 4;
		cur_color2 = RED;
		counter2 = 14; }

	   if (c_Red2 <= 0) {
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, 1);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, 0);
		c_Red2 = 15;
		cur_color2 = GREEN;
		counter2 = 10; }

	   if (c_1s <= 0) {
		switch (cur_color1) {
		 case GREEN:
		 c_Green1--;
		 break;

		 case YELLOW:
		 c_Yellow1--;
		 break;

		 case RED:
		 c_Red1--;
		 break; }

		switch (cur_color2) {
		 case GREEN:
		 c_Green2--;
		 break;

		 case YELLOW:
		 c_Yellow2--;
		 break;

		 case RED:
		 c_Red2--;
		 break; }
		 counter1--;
		 counter2--;
		 c_1s = 100; }

		switch (sw_led) {
		 case 0:
		 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 0);
		 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 1);
		 display7SEG(counter1 / 10);
		 sw_led = 1;
		 break;

		 case 1:
		 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 0);
		 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 1);
		 display7SEG(counter1 % 10);
		 sw_led = 2;
		 break;

		 case 2:
		 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 0);
		 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 1);
		 display7SEG(counter2 / 10);
		 sw_led = 3;
		 break;

		 case 3:
		 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
		 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 1);
		 display7SEG(counter2 % 10);
		 sw_led = 0;
		 break; }
		 c_1s--;
		 HAL_Delay(5);
    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
/* USER CODE BEGIN MX_GPIO_Init_1 */
/* USER CODE END MX_GPIO_Init_1 */

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3
                          |GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_6|GPIO_PIN_7
                          |GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_10|GPIO_PIN_11
                          |GPIO_PIN_12, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3|GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_6, GPIO_PIN_RESET);

  /*Configure GPIO pins : PA0 PA1 PA2 PA3
                           PA4 PA5 PA6 PA7
                           PA8 PA9 PA10 PA11
                           PA12 */
  GPIO_InitStruct.Pin = GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3
                          |GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_6|GPIO_PIN_7
                          |GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_10|GPIO_PIN_11
                          |GPIO_PIN_12;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : PB3 PB4 PB5 PB6 */
  GPIO_InitStruct.Pin = GPIO_PIN_3|GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_6;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

/* USER CODE BEGIN MX_GPIO_Init_2 */
/* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
