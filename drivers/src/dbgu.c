#include "dbgu.h"
#include "firmware_conf.h"
#include "led.h"	

void debug_init(void) {
	led_set(LED_RED, LED_TOGGLE);
	// Enable peripheral clocks
	/*
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB, ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART1, ENABLE);

	// Initialize Serial Port
	GPIO_Init(GPIOB, &(GPIO_InitTypeDef) {
		.GPIO_Pin   = GPIO_Pin_6,
		.GPIO_Speed = GPIO_Speed_50MHz,
		.GPIO_Mode  = GPIO_Mode_AF,
		.GPIO_OType = GPIO_OType_PP
	});

	GPIO_Init(GPIOB, &(GPIO_InitTypeDef) {
		.GPIO_Pin = GPIO_Pin_7,
		.GPIO_Mode = GPIO_Mode_AF,
		.GPIO_PuPd = GPIO_PuPd_UP
	});

	GPIO_PinAFConfig(GPIOB, GPIO_PinSource6, GPIO_AF_USART1);
	GPIO_PinAFConfig(GPIOB, GPIO_PinSource7, GPIO_AF_USART1);

	USART_Init(USART1, &(USART_InitTypeDef) {
		.USART_BaudRate = 115200,
		.USART_WordLength = USART_WordLength_8b,
		.USART_StopBits = USART_StopBits_1,
		.USART_Parity = USART_Parity_No ,
		.USART_HardwareFlowControl = USART_HardwareFlowControl_None,
		.USART_Mode = USART_Mode_Rx | USART_Mode_Tx
	});
*/
//UART1
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART1, ENABLE);
led_set(LED_RED, LED_TOGGLE);
	GPIO_PinAFConfig(GPIOA, TFT_WIFI_TX_Pin, GPIO_AF_USART1);
	GPIO_PinAFConfig(GPIOA, TFT_WIFI_RX_Pin, GPIO_AF_USART1);
	// Initialize Serial Port
	GPIO_Init(GPIOA, &(GPIO_InitTypeDef) {
		.GPIO_Pin   = TFT_WIFI_TX_Pin,
		.GPIO_Speed = GPIO_Speed_50MHz,
		.GPIO_Mode  = GPIO_Mode_AF,
		.GPIO_OType = GPIO_OType_PP
	});
	GPIO_Init(GPIOA, &(GPIO_InitTypeDef) {
		.GPIO_Pin = TFT_WIFI_RX_Pin,
		.GPIO_Mode = GPIO_Mode_AF,
		.GPIO_PuPd = GPIO_PuPd_UP
	});
led_set(LED_RED, LED_TOGGLE);
	USART_Init(USART1, &(USART_InitTypeDef) {
		.USART_BaudRate = 115200,
		.USART_WordLength = USART_WordLength_8b,
		.USART_StopBits = USART_StopBits_1,
		.USART_Parity = USART_Parity_No ,
		.USART_HardwareFlowControl = USART_HardwareFlowControl_None,
		.USART_Mode = USART_Mode_Rx | USART_Mode_Tx
	});
	USART_Cmd(USART1, ENABLE);
led_set(LED_RED, LED_TOGGLE);
//UART2
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC, ENABLE);
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART3, ENABLE);
	GPIO_PinAFConfig(TX0_GPIO_Port, TX0_Pin, GPIO_AF_USART3);
	GPIO_PinAFConfig(RX0_GPIO_Port, RX0_Pin, GPIO_AF_USART3);

led_set(LED_RED, LED_TOGGLE);
	GPIO_Init(TX0_GPIO_Port, &(GPIO_InitTypeDef) {
		.GPIO_Pin   = TX0_Pin,
		.GPIO_Speed = GPIO_Speed_50MHz,
		.GPIO_Mode  = GPIO_Mode_AF,
		.GPIO_OType = GPIO_OType_PP
	});
	GPIO_Init(RX0_GPIO_Port, &(GPIO_InitTypeDef) {
		.GPIO_Pin = RX0_Pin,
		.GPIO_Mode = GPIO_Mode_AF,
		.GPIO_PuPd = GPIO_PuPd_UP
	});
led_set(LED_RED, LED_TOGGLE);
	USART_Init(USART3, &(USART_InitTypeDef) {
		.USART_BaudRate = 115200,
		.USART_WordLength = USART_WordLength_8b,
		.USART_StopBits = USART_StopBits_1,
		.USART_Parity = USART_Parity_No ,
		.USART_HardwareFlowControl = USART_HardwareFlowControl_None,
		.USART_Mode = USART_Mode_Rx | USART_Mode_Tx
	});
	USART_Cmd(USART3, ENABLE);
led_set(LED_RED, LED_TOGGLE);
//UART6
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC, ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART6, ENABLE);
	GPIO_PinAFConfig(WIFI_TX_GPIO_Port,WIFI_TX_Pin, GPIO_AF_USART6);
	GPIO_PinAFConfig(WIFI_RX_GPIO_Port, WIFI_TX_Pin, GPIO_AF_USART6);

led_set(LED_RED, LED_TOGGLE);
	GPIO_Init(WIFI_TX_GPIO_Port, &(GPIO_InitTypeDef) {
		.GPIO_Pin   = WIFI_TX_Pin,
		.GPIO_Speed = GPIO_Speed_50MHz,
		.GPIO_Mode  = GPIO_Mode_AF,
		.GPIO_OType = GPIO_OType_PP
	});
	GPIO_Init(WIFI_RX_GPIO_Port, &(GPIO_InitTypeDef) {
		.GPIO_Pin = WIFI_RX_Pin,
		.GPIO_Mode = GPIO_Mode_AF,
		.GPIO_PuPd = GPIO_PuPd_UP
	});
led_set(LED_RED, LED_TOGGLE);
	USART_Init(USART6, &(USART_InitTypeDef) {
		.USART_BaudRate = 115200,
		.USART_WordLength = USART_WordLength_8b,
		.USART_StopBits = USART_StopBits_1,
		.USART_Parity = USART_Parity_No ,
		.USART_HardwareFlowControl = USART_HardwareFlowControl_None,
		.USART_Mode = USART_Mode_Rx | USART_Mode_Tx
	});
	USART_Cmd(USART6, ENABLE);
}

void debug_deinit(void) {
	USART_Cmd(USART1, DISABLE);
	USART_DeInit(USART1);
	USART_Cmd(USART3, DISABLE);
	USART_DeInit(USART3);
	USART_Cmd(USART6, DISABLE);
	USART_DeInit(USART6);
	//GPIO_PinAFConfig(GPIOB, GPIO_PinSource6, GPIO_AF_MCO);
	//GPIO_PinAFConfig(GPIOB, GPIO_PinSource7, GPIO_AF_MCO);
	GPIO_DeInit(GPIOA);
	GPIO_DeInit(GPIOB);
	GPIO_DeInit(GPIOC);
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, DISABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART1, DISABLE);
}

int debug_test(void) {
	return (USART_GetFlagStatus(USART1, USART_FLAG_RXNE) == RESET) ? 0 : 1;
}

// send chr via UART (platform dependent)
void debug_chr(char chr) {
	while (USART_GetFlagStatus(USART1, USART_FLAG_TXE) == RESET);
	led_set(LED_RED, LED_TOGGLE);
	USART_SendData(USART1, (uint16_t) chr);
	while (USART_GetFlagStatus(USART3, USART_FLAG_TXE) == RESET);
	led_set(LED_RED, LED_TOGGLE);
	USART_SendData(USART3, (uint16_t) chr);
	while (USART_GetFlagStatus(USART6, USART_FLAG_TXE) == RESET);
	led_set(LED_RED, LED_TOGGLE);
	USART_SendData(USART6, (uint16_t) chr);
	
}

// halts program/task execution until char is received
char debug_waitkey(void) {
	//while (USART_GetFlagStatus(USART1, USART_FLAG_RXNE) == RESET);
	delay(10);
	return (unsigned char) USART_ReceiveData(USART1);
}
