#ifndef __FIRMWARE_CONF_H
#define __FIRMWARE_CONF_H

typedef struct {
    uint8_t entry_sign;
    uint32_t crc;
    uint32_t crc_shadow;
    uint32_t size;          //  Size of firmware image
    uint32_t uuid;          //  Integer representing unique firmware ID
    uint16_t version;       //  Integer representing firmware version
    uint8_t closing_sign;
} FirmwareHeader_t;

#define ENTRY_VALUE 0x7E
#define CLOSE_VALUE 0xFE

#define ENTRY_OFFSET 0
#define CRC_OFFSET (ENTRY_OFFSET + sizeof(uint8_t))
#define CRC_SHADOW_OFFSET (CRC_OFFSET + sizeof(uint32_t))
#define SIZE_OFFSET (CRC_SHADOW_OFFSET + sizeof(uint32_t))
#define UUID_OFFSET (SIZE_OFFSET + sizeof(uint32_t))
#define VERSION_OFFSET (UUID_OFFSET + sizeof(uint32_t))
#define CLOSE_OFFSET (VERSION_OFFSET + sizeof(uint16_t))
#define HEADER_SIZE (CLOSE_OFFSET + sizeof(uint8_t))

#define DRIVE_NO 0
#define NEW_NAME "mkstft35.bin"
#define CURR_NAME "mkstft35.bin"
#define BASIC_NAME "mkstft35.bin"


#define Y_DIR_Pin GPIO_Pin_2
#define Y_DIR_GPIO_Port GPIOE
#define Y_STEP_Pin GPIO_Pin_3
#define Y_STEP_GPIO_Port GPIOE
#define Y_ENA_Pin GPIO_Pin_4
#define Y_ENA_GPIO_Port GPIOE
#define X_DIR_Pin GPIO_Pin_5
#define X_DIR_GPIO_Port GPIOE
#define X_STEP_Pin GPIO_Pin_6
#define X_STEP_GPIO_Port GPIOE
#define X_ENA_Pin GPIO_Pin_13
#define X_ENA_GPIO_Port GPIOC
#define FAN_Pin GPIO_Pin_1
#define FAN_GPIO_Port GPIOF
#define HEATER2_Pin GPIO_Pin_2
#define HEATER2_GPIO_Port GPIOF
#define HEATER1_Pin GPIO_Pin_3
#define HEATER1_GPIO_Port GPIOF
#define BED_Pin GPIO_Pin_4
#define BED_GPIO_Port GPIOF
#define TB_Pin GPIO_Pin_0
#define TB_GPIO_Port GPIOC
#define TH1_Pin GPIO_Pin_2
#define TH1_GPIO_Port GPIOC
#define TH2_Pin GPIO_Pin_3
#define TH2_GPIO_Port GPIOC
#define FALA_CTRL_Pin GPIO_Pin_0
#define FALA_CTRL_GPIO_Port GPIOA
#define EXT_IRQ_Pin GPIO_Pin_0
#define EXT_IRQ_GPIO_Port GPIOA
#define EXT_CTR_Pin GPIO_Pin_6
#define EXT_CTR_GPIO_Port GPIOA
#define BOOT1_Pin GPIO_Pin_2
#define BOOT1_GPIO_Port GPIOB
#define BEEPER_Pin GPIO_Pin_11
#define BEEPER_GPIO_Port GPIOF
#define MT_DET2_Pin GPIO_Pin_13
#define MT_DET2_GPIO_Port GPIOF
#define MT_DET1_Pin GPIO_Pin_14
#define MT_DET1_GPIO_Port GPIOF
#define PW_DET_Pin GPIO_Pin_0
#define PW_DET_GPIO_Port GPIOG
#define PW_OFF_Pin GPIO_Pin_1
#define PW_OFF_GPIO_Port GPIOG
#define TX0_Pin GPIO_Pin_10
#define TX0_GPIO_Port GPIOB
#define RX0_Pin GPIO_Pin_11
#define RX0_GPIO_Port GPIOB
#define WIFI_CS_Pin GPIO_Pin_12
#define WIFI_CS_GPIO_Port GPIOB
#define WIFI_RST_Pin GPIO_Pin_2
#define WIFI_RST_GPIO_Port GPIOG
#define TH_CS_Pin GPIO_Pin_11
#define TH_CS_GPIO_Port GPIOD
#define BLACK_LIGHT_Pin GPIO_Pin_12
#define BLACK_LIGHT_GPIO_Port GPIOD
#define FSMC_RESET_Pin GPIO_Pin_13
#define FSMC_RESET_GPIO_Port GPIOD
#define Z__Pin GPIO_Pin_3
#define Z__GPIO_Port GPIOG
#define Z_G4_Pin GPIO_Pin_4
#define Z_G4_GPIO_Port GPIOG
#define Y__Pin GPIO_Pin_5
#define Y__GPIO_Port GPIOG
#define Y_G6_Pin GPIO_Pin_6
#define Y_G6_GPIO_Port GPIOG
#define X__Pin GPIO_Pin_7
#define X__GPIO_Port GPIOG
#define X_G8_Pin GPIO_Pin_8
#define X_G8_GPIO_Port GPIOG
#define WIFI_TX_Pin GPIO_Pin_6
#define WIFI_TX_GPIO_Port GPIOC
#define WIFI_RX_Pin GPIO_Pin_7
#define WIFI_RX_GPIO_Port GPIOC
#define E1_DIR_Pin GPIO_Pin_15
#define E1_DIR_GPIO_Port GPIOA
#define E1_STEP_Pin GPIO_Pin_3
#define E1_STEP_GPIO_Port GPIOD
#define E1_ENA_Pin GPIO_Pin_6
#define E1_ENA_GPIO_Port GPIOD
#define E0_DIR_Pin GPIO_Pin_9
#define E0_DIR_GPIO_Port GPIOG
#define E0_STEP_Pin GPIO_Pin_10
#define E0_STEP_GPIO_Port GPIOG
#define FL_CS_Pin GPIO_Pin_15
#define FL_CS_GPIO_Port GPIOG
#define E0_ENA_Pin GPIO_Pin_8
#define E0_ENA_GPIO_Port GPIOB
#define Z_DIR_Pin GPIO_Pin_9
#define Z_DIR_GPIO_Port GPIOB
#define Z_STEP_Pin GPIO_Pin_0
#define Z_STEP_GPIO_Port GPIOE
#define Z_ENA_Pin GPIO_Pin_1
#define Z_ENA_GPIO_Port GPIOE
/* USER CODE BEGIN Private defines */       //**增加部分
#define EXT_IRQ_Pin GPIO_Pin_0
#define EXT_IRQ_GPIO_Port GPIOA
#define WIFI_IO0_Pin GPIO_Pin_1
#define WIFI_IO0_GPIO_Port GPIOA
#define T_CS_Pin GPIO_Pin_4
#define T_CS_GPIO_Port GPIOC
#define T_PEN_Pin GPIO_Pin_5
#define T_PEN_GPIO_Port GPIOC
#define PB0_Pin GPIO_Pin_0
#define PB4_Pin GPIO_Pin_4
#define PB0_GPIO_Port GPIOB
#define PB1_Pin GPIO_Pin_1
#define PB1_GPIO_Port GPIOB
#define PB12_Pin GPIO_Pin_12
#define PB12_GPIO_Port GPIOB
#define WIFI_RST_Pin GPIO_Pin_8
#define WIFI_RST_GPIO_Port GPIOA
#define SW_DIO_Pin GPIO_Pin_13
#define SW_DIO_GPIO_Port GPIOA
#define SW_CLK_Pin GPIO_Pin_14
#define SW_CLK_GPIO_Port GPIOA
#define SDIO_CD_Pin GPIO_Pin_3
#define SDIO_CD_GPIO_Port GPIOD
#define F_CS_Pin GPIO_Pin_9
#define F_CS_GPIO_Port GPIOB
#define GPIO_Mode_Out_OD 0x14
#define GPIO_Pin_0    ((uint16_t)0x0001)  /* Pin 0 selected */
#define GPIO_Pin_1    ((uint16_t)0x0002)  /* Pin 1 selected */
#define  GPIO_Speed_50MHz  0x02
//tan 20171008
#define TFT_WIFI_TX_Pin GPIO_Pin_9
#define TFT_WIFI_TX_GPIO_Port GPIOA
#define TFT_WIFI_RX_Pin GPIO_Pin_10
#define TFT_WIFI_RX_GPIO_Port GPIOA

#endif /* __FIRMWARE_CONF_H */
