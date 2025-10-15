#pragma once

#define PIN(X,Y) (X * 16 + Y)

// Pin count
// ----
#ifdef __cplusplus
extern "C" unsigned int PINCOUNT_fn();
#endif
#define PINS_COUNT           (PINCOUNT_fn())
#define NUM_DIGITAL_PINS     (121u)
#define NUM_ANALOG_INPUTS    (8u)
#define NUM_ANALOG_OUTPUTS   (2u)

#define PIN_A0   (22u)
#define PIN_A1   (19u)
#define PIN_A2   (18u)
#define PIN_A3   (81u)
#define PIN_A4   (21u)
#define PIN_A5   (20u)
// #define PIN_A6   (21u)
// #define PIN_A7   (22u)

#define DAC8_HOWMANY (0)
#define DAC12_HOWMANY (2)
#define DAC         21
#define DAC1        20
#define IS_DAC(x)   (x == DAC || x == DAC1)
#define DAC_ADDRESS_12_CH0          R_DAC_BASE
// TODO: check if true
#define DAC_ADDRESS_12_CH1          (R_DAC_BASE+2)

static const uint8_t A0 = PIN_A0;
static const uint8_t A1 = PIN_A1;
static const uint8_t A2 = PIN_A2;
static const uint8_t A3 = PIN_A3;
static const uint8_t A4 = PIN_A4;
static const uint8_t A5 = PIN_A5;
// static const uint8_t A6 = PIN_A6;
// static const uint8_t A7 = PIN_A7;

// Digital pins
// -----------
#define PIN_D0   (50u)
#define PIN_D1   (49u)
#define PIN_D2   (28u)
#define PIN_D3   (2u)
#define PIN_D4   (63u)
#define PIN_D5   (64u)
#define PIN_D6   (65u)
#define PIN_D7   (24u)
#define PIN_D8   (99u)
#define PIN_D9   (66u)
#define PIN_D10  (89u)
#define PIN_D11  (42u)
#define PIN_D12  (41u)
#define PIN_D13  (9u)
#define PIN_D14  (37u)
#define PIN_D15  (38u)

#undef D0
#undef D1
#undef D2
#undef D3
#undef D4
#undef D5
#undef D6
#undef D7
#undef D8
#undef D9
#undef D10
#undef D11
#undef D12
#undef D13
#undef D14
#undef D15
static const uint8_t D0 = PIN_D0;
static const uint8_t D1 = PIN_D1;
static const uint8_t D2 = PIN_D2;
static const uint8_t D3 = PIN_D3;
static const uint8_t D4 = PIN_D4;
static const uint8_t D5 = PIN_D5;
static const uint8_t D6 = PIN_D6;
static const uint8_t D7 = PIN_D7;
static const uint8_t D8 = PIN_D8;
static const uint8_t D9 = PIN_D9;
static const uint8_t D10 = PIN_D10;
static const uint8_t D11 = PIN_D11;
static const uint8_t D12 = PIN_D12;
static const uint8_t D13 = PIN_D13;
static const uint8_t D14 = PIN_D14;
static const uint8_t D15 = PIN_D15;

// LEDs
// ----
#define PIN_LED     (83u)
#define LED_BUILTIN PIN_LED
#define LEDR        (83u)
#define LEDG        (82u)
#define LEDB        (15u)

/****** RTC CORE DEFINES *******/
#define RTC_HOWMANY       1

/****** UART CORE DEFINES ******/

/* TODO: add CTS/RTS pins */
#define SERIAL_HOWMANY	    5
// #define UART1_TX_PIN        14
// #define UART1_RX_PIN        13
#define UART1_TX_PIN        49
#define UART1_RX_PIN        50
// #define UART2_TX_PIN        49
// #define UART2_RX_PIN        50
#define UART2_TX_PIN        14
#define UART2_RX_PIN        13
#define UART3_TX_PIN        53
#define UART3_RX_PIN        54
#define UART4_TX_PIN        57
#define UART4_RX_PIN        58
#define UART5_TX_PIN        92
#define UART5_RX_PIN        93
#define UART5_RTS_PIN       94
#define UART5_CTS_PIN       95

#define SERIAL_PORT_HARDWARE Serial1

/****** WIRE CORE DEFINES ******/

#define WIRE_HOWMANY            4
#define WIRE_INTERFACES_COUNT   WIRE_HOWMANY
// #define WIRE_SDA_PIN            11
// #define WIRE_SCL_PIN            12
// #define WIRE1_SDA_PIN           37
// #define WIRE1_SCL_PIN           38
#define WIRE_SDA_PIN           37
#define WIRE_SCL_PIN           38
#define WIRE1_SDA_PIN            11
#define WIRE1_SCL_PIN            12
#define WIRE2_SDA_PIN           39
#define WIRE2_SCL_PIN           40
#define WIRE3_SDA_PIN           96
#define WIRE3_SCL_PIN           97

/****** SPI CORE DEFINES ******/

#define SPI_HOWMANY       2

#define PIN_SPI_MOSI      8
#define PIN_SPI_MISO      10
#define PIN_SPI_SCK       9
#define PIN_SPI_CS        7
#define FORCE_SPI_MODE    (MODE_SCI)

#define PIN_SPI1_MOSI     46
#define PIN_SPI1_MISO     45
#define PIN_SPI1_SCK      47
#define PIN_SPI1_CS       48
#define FORCE_SPI1_MODE   (MODE_SPI)

static const uint8_t MOSI = PIN_SPI_MOSI;
static const uint8_t MISO = PIN_SPI_MISO;
static const uint8_t SCK  = PIN_SPI_SCK;
static const uint8_t CS  =  PIN_SPI_CS;
static const uint8_t SS  =  PIN_SPI_CS;

/****** CAN CORE DEFINES ******/

#define CANFD_HOWMANY     2

#define PIN_CAN0_TX       (44) /* P609 */
#define PIN_CAN0_RX       (43) /* P610 */
#define PIN_CAN0_STBY     (51)  /* P611 / D3 Portenta H33 = PWM3 = HD RIGHT Pin #65 = nCAN_EN */

#define PIN_CAN1_TX       (42)
#define PIN_CAN1_RX       (41)
#define PIN_CAN1_STBY     (-1)

/****** GTP CORE DEFINES *******/

#define GTP32_HOWMANY     4
#define GTP16_HOWMANY     6
#define GPT_HOWMANY       10

/****** AGT CORE DEFINES *******/
#define AGT_HOWMANY       6

/****** ETHERNET CORE DEFINES *******/
#define ETHERNET_HOWMANY   1

/****** SDCARD CORE DEFINES *******/
#define SDCARD_HOWMANY     1

#define I2S_HOWMANY        1

#define EXT_INTERRUPTS_HOWMANY 8

#define USE_4BIT_SDCARD   1

#define USB_VID           (0x2341)
#define USB_PID           (0x0068)
#define USB_NAME          "Portenta C33"

#define ARDUINO_FLASH_TYPE  HP_FLASH
#define FLASH_BASE_ADDRESS  0x08000000
#define FLASH_TOTAL_SIZE    0x2000
#define FLASH_BLOCK_SIZE    0x40

#define PIN_QSPI_CLK     (116)
#define PIN_QSPI_SS      (117)
#define PIN_QSPI_D0      (118)
#define PIN_QSPI_D1      (119)
#define PIN_QSPI_D2      (120)
#define PIN_QSPI_D3      (121)

#define HAS_QSPI

#define QSPI_TOTAL_SIZE       (0x1000000) 
#define QSPI_READ_BLOCK_SIZE  (0x1)
#define QSPI_ERASE_BLOCK_SIZE (0x1000)
#define QSPI_WRITE_BLOCK_SIZE (0x1)

#define HAS_SDHI

#define PIN_SDHI_CLK (84)
#define PIN_SDHI_CMD (85)
#define PIN_SDHI_D0  (86)
#define PIN_SDHI_D1  (87)
#define PIN_SDHI_D2  (88)
#define PIN_SDHI_D3  (89)
#define PIN_SDHI_CD  (90)  
#define PIN_SDHI_WP  (91)

/* Portenta Vision Shield compatibility */
#define LORA_RESET          2 //PWM2
#define LORA_BOOT0          3 //PWM3
#define LORA_IRQ_DUMB       4 //PWM4
#define SerialLoRa          Serial3

#define RTC_CLOCK_SOURCE    RTC_CLOCK_SOURCE_SUBCLK

#define AR_INTERNAL_VOLTAGE     1.18f

#define ETHERNET_AGT_TIMER_CHANNEL      3
#define ETHERNET_CLK_PIN                BSP_IO_PORT_06_PIN_00
