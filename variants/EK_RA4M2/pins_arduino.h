#pragma once

#define PIN(X,Y) (X * 16 + Y)

// Pin count
// ----
#ifdef __cplusplus
extern "C" unsigned int PINCOUNT_fn();
#endif
#define PINS_COUNT           (PINCOUNT_fn())
#define NUM_DIGITAL_PINS     (78u)
#define NUM_ANALOG_INPUTS    (8u)
#define NUM_ANALOG_OUTPUTS   (2u)

#define PIN_A0   (14u)
#define PIN_A1   (15u)
#define PIN_A2   (16u)
#define PIN_A3   (17u)
#define PIN_A4   (18u)
#define PIN_A5   (19u)

#define DAC8_HOWMANY (0)
#define DAC12_HOWMANY (2)
#define DAC         18
#define DAC1        19
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

// Digital pins
// -----------
#define PIN_D0   (0u)
#define PIN_D1   (1u)
#define PIN_D2   (2u)
#define PIN_D3   (3u)
#define PIN_D4   (4u)
#define PIN_D5   (5u)
#define PIN_D6   (6u)
#define PIN_D7   (7u)
#define PIN_D8   (8u)
#define PIN_D9   (9u)
#define PIN_D10  (10u)
#define PIN_D11  (11u)
#define PIN_D12  (12u)
#define PIN_D13  (13u)

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
static const uint8_t  D0 = PIN_D0;
static const uint8_t  D1 = PIN_D1;
static const uint8_t  D2 = PIN_D2;
static const uint8_t  D3 = PIN_D3;
static const uint8_t  D4 = PIN_D4;
static const uint8_t  D5 = PIN_D5;
static const uint8_t  D6 = PIN_D6;
static const uint8_t  D7 = PIN_D7;
static const uint8_t  D8 = PIN_D8;
static const uint8_t  D9 = PIN_D9;
static const uint8_t D10 = PIN_D10;
static const uint8_t D11 = PIN_D11;
static const uint8_t D12 = PIN_D12;
static const uint8_t D13 = PIN_D13;

// LEDs
// ----
#define PIN_LED     (107u)
#define LED_BUILTIN PIN_LED
#define LEDR        (107u)
#define LEDG        (59u)
#define LEDB        (90u)

/****** RTC CORE DEFINES *******/
#define RTC_HOWMANY       1

/****** UART CORE DEFINES ******/

/* TODO: add CTS/RTS pins */
#define SERIAL_HOWMANY	    1 // actually 5, but we only expose 1
#define UART1_TX_PIN        1
#define UART1_RX_PIN        0

#define SERIAL_PORT_HARDWARE Serial1

/****** WIRE CORE DEFINES ******/

#define WIRE_HOWMANY            2
#define WIRE_INTERFACES_COUNT   WIRE_HOWMANY
#define WIRE_SDA_PIN            20
#define WIRE_SCL_PIN            21
// #define WIRE1_SDA_PIN           
// #define WIRE1_SCL_PIN           

/****** SPI CORE DEFINES ******/

#define SPI_HOWMANY       1 // actually 2, but we only expose 1

#define PIN_SPI_MOSI      8
#define PIN_SPI_MISO      10
#define PIN_SPI_SCK       9
#define PIN_SPI_CS        7
#define FORCE_SPI_MODE    (MODE_SCI)

static const uint8_t MOSI = PIN_SPI_MOSI;
static const uint8_t MISO = PIN_SPI_MISO;
static const uint8_t SCK  = PIN_SPI_SCK;
static const uint8_t CS  =  PIN_SPI_CS;
static const uint8_t SS  =  PIN_SPI_CS;

/****** CAN CORE DEFINES ******/

#define CANFD_HOWMANY     0 // actually 1, but we don't expose it

// #define PIN_CAN0_TX
// #define PIN_CAN0_RX
// #define PIN_CAN0_STBY

/****** GTP CORE DEFINES *******/

#define GTP32_HOWMANY     4
#define GTP16_HOWMANY     6
#define GPT_HOWMANY       10

/****** AGT CORE DEFINES *******/
#define AGT_HOWMANY       6

/****** ETHERNET CORE DEFINES *******/
#define ETHERNET_HOWMANY   0

/****** SDCARD CORE DEFINES *******/
#define SDCARD_HOWMANY     0

#define I2S_HOWMANY        0 // actually 1, but we don't expose it

#define EXT_INTERRUPTS_HOWMANY 8

#define USE_4BIT_SDCARD   1

// #define USB_VID           (0x2341)
// #define USB_PID           (0x0068)
// #define USB_NAME          "Portenta C33"

#define ARDUINO_FLASH_TYPE  HP_FLASH
#define FLASH_BASE_ADDRESS  0x08000000
#define FLASH_TOTAL_SIZE    0x2000
#define FLASH_BLOCK_SIZE    0x40
