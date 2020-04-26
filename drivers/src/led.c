#include "led.h"

void led_init(void) {
    RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);

    GPIO_Init(GPIOA, &(GPIO_InitTypeDef) {
        .GPIO_Pin   =  GPIO_Pin_1 ,
        .GPIO_Mode  = GPIO_Mode_OUT,
        .GPIO_OType = GPIO_OType_PP,
        .GPIO_PuPd  = GPIO_PuPd_NOPULL,
        .GPIO_Speed = GPIO_Speed_50MHz,
    });
}

void led_deinit(void) {
    GPIO_DeInit(GPIOD);
    RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD, DISABLE);
}

void led_set(led_id_t led_id, led_action_t led_action) {
    switch (led_action) {
		case LED_ON:		GPIO_SetBits(GPIOA, led_id); break;
		case LED_OFF:		GPIO_ResetBits(GPIOA, led_id); break;
		case LED_TOGGLE:	GPIO_ToggleBits(GPIOA, led_id); break;
    }
}

uint8_t led_state(led_id_t led_id) {
    return GPIO_ReadInputDataBit(GPIOA, led_id);
}
