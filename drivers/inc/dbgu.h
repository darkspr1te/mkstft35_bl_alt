#ifndef __DBGU_H__
#define __DBGU_H__

#include "stm32f4xx.h"
#define TFT_WIFI_TX_Pin GPIO_Pin_9
#define TFT_WIFI_TX_GPIO_Port GPIOA
#define TFT_WIFI_RX_Pin GPIO_Pin_10
#define TFT_WIFI_RX_GPIO_Port GPIOA

void debug_init(void);
void debug_deinit(void);
int debug_test(void);
void debug_chr(char chr);
char debug_waitkey(void);

#endif
