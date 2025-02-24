#ifndef _MAX14808_H_
#define _MAX14808_H_

#include "stm32g4xx_hal.h"
#include "main.h"

typedef enum MAX14808_Mode_e
{
  MAX14808_MODE_SHUTDOWN = 0,
  MAX14808_MODE_OCTAL_THREE_LEVEL,
  MAX14808_MODE_QUAD_FIVE_LEVEL,
  MAX14808_MODE_TRANSMIT_DISABLE
} MAX14808_Mode;

typedef enum MAX14808_ChannelState_e
{
  OFF = 0,
  VNN,
  VPP,
  RECEIVE
} MAX14808_ChannelState;

void MAX14808_Init();
void MAX14808_SetMode(MAX14808_Mode mode);
void MAX14808_SetChannel(uint8_t channel, uint8_t state);

#endif // _MAX14808_H_