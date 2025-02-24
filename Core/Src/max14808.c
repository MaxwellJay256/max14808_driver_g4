/**
 ******************************************************************************
 * @file max14808.c
 * @brief MAX14808 driver
 * @author Maxwell Jay
 ******************************************************************************
 */

#include "max14808.h"
#include <stdlib.h>

void MAX14808_Init()
{
  // Set mode to shutdown
  MAX14808_SetMode(MAX14808_MODE_SHUTDOWN);

  // Set all channels off
  for (uint8_t i = 0; i < 8; i++)
  {
    MAX14808_SetChannel(i, OFF);
  }
}

void MAX14808_SetMode(MAX14808_Mode mode)
{
  // mode 为十进制的 0 - 3，拆分为二进制的 0 - 3
  uint8_t mode_bits[2] = {mode & 0x01, (mode & 0x02) >> 1};
  HAL_GPIO_WritePin(MODE_GPIO_Port, MODE0_Pin, mode_bits[0]);
  HAL_GPIO_WritePin(MODE_GPIO_Port, MODE1_Pin, mode_bits[1]);
}

void MAX14808_SetChannel(uint8_t channel, uint8_t state)
{
  // state 为十进制的 0 - 3，拆分为二进制的 0 - 3
  uint8_t state_bits[2] = {state & 0x01, (state & 0x02) >> 1};
  // channel 为十进制的 1 - 8，每个 channel 都有 2 个引脚 INN 和 INP，
  // 例如 channel 2 对应 GPIO_PIN_2(0x0004) 和 GPIO_PIN_3(0x0008)
  // 则应将 0x0001 移位 2 * (channel - 1) 和 2 * (channel - 1) + 1 位
  HAL_GPIO_WritePin(PULSE_GPIO_Port, (uint16_t)(0x0001 << (2 * (channel - 1))), state_bits[0]);
  HAL_GPIO_WritePin(PULSE_GPIO_Port, (uint16_t)(0x0001 << (2 * (channel - 1) + 1)), state_bits[1]);
}