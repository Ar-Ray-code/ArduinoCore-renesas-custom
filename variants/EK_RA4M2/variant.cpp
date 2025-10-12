#include "Arduino.h"
#include "pinmux.inc"

// pins not yet handled by the script
// const uint16_t P210[] = {
//   PIN_PWM_AGT|CHANNEL_5|PWM_CHANNEL_B|LAST_ITEM_GUARD,
// };
// const uint16_t P211[] = { LAST_ITEM_GUARD };
// const uint16_t P214[] = { LAST_ITEM_GUARD };
// const uint16_t P313[] = { LAST_ITEM_GUARD };
// const uint16_t P314[] = { LAST_ITEM_GUARD };
// const uint16_t P209[] = { LAST_ITEM_GUARD };
// const uint16_t P208[] = { LAST_ITEM_GUARD };
// const uint16_t P311_b[] = {
//   SCI_CHANNEL|PIN_SCK|CHANNEL_3|SCI_ODD_CFG,
//   PIN_PWM_AGT|CHANNEL_1|PWM_CHANNEL_B|LAST_ITEM_GUARD
// };
// #define P311 P311_b


const uint16_t P015_b[] = {
PIN_DAC|CHANNEL_1,
PIN_ANALOG|CHANNEL_13|ADC_0,
PIN_INTERRUPT|CHANNEL_13|LAST_ITEM_GUARD
};
#define P015 P015_b

const uint16_t P014_b[] = {
PIN_DAC|CHANNEL_0,
PIN_ANALOG|CHANNEL_12|ADC_0|LAST_ITEM_GUARD
};
#define P014 P014_b

extern "C" const PinMuxCfg_t g_pin_cfg[] = { 

  // MKR
  { BSP_IO_PORT_01_PIN_00,  P100 }, /*   D0     |     RX0     */
  { BSP_IO_PORT_01_PIN_01,  P101 }, /*   D1     |     TX0     */
  { BSP_IO_PORT_03_PIN_04,  P304 }, /*   D2     |     IRQ9    */
  { BSP_IO_PORT_01_PIN_05,  P105 }, /*   D3     |     IRQ0    */
  { BSP_IO_PORT_01_PIN_06,  P106 }, /*   D4     |             */
  { BSP_IO_PORT_01_PIN_11,  P111 }, /*   D5     |             */
  { BSP_IO_PORT_01_PIN_03,  P103 }, /*   D6     |             */
  { BSP_IO_PORT_01_PIN_07,  P107 }, /*   D7     |             */
  { BSP_IO_PORT_01_PIN_02,  P102 }, /*   D8     |             */
  { BSP_IO_PORT_01_PIN_14,  P114 }, /*   D9     |             */
  { BSP_IO_PORT_06_PIN_03,  P603 }, /*   D10    |     SS9     */
  { BSP_IO_PORT_06_PIN_02,  P602 }, /*   D11    |     MOSI9   */
  { BSP_IO_PORT_06_PIN_01,  P601 }, /*   D12    |     MISO9   */
  { BSP_IO_PORT_06_PIN_00,  P600 }, /*   D13    |     SCK9    */

  { BSP_IO_PORT_00_PIN_00,  P000 }, /*   D14    |     A0      */
  { BSP_IO_PORT_00_PIN_01,  P001 }, /*   D15    |     A1      */
  { BSP_IO_PORT_00_PIN_03,  P003 }, /*   D16    |     A2      */
  { BSP_IO_PORT_00_PIN_07,  P007 }, /*   D17    |     A3      */
  { BSP_IO_PORT_00_PIN_14,  P014 }, /*   D18    |     A4      */
  { BSP_IO_PORT_00_PIN_15,  P015 }, /*   D19    |     A5      */

//   I2C
  { BSP_IO_PORT_01_PIN_12,  P112 }, /*   D20    |     SDA2    */
  { BSP_IO_PORT_01_PIN_13,  P113 }, /*   D21    |     SCL2    */

  { BSP_IO_PORT_03_PIN_03,  P303 }, /*   D22    |             */
  { BSP_IO_PORT_04_PIN_01,  P401 }, /*   D23    |             */
  { BSP_IO_PORT_03_PIN_08,  P308 }, /*   D24    |             */
  { BSP_IO_PORT_04_PIN_02,  P402 }, /*   D25    |             */
  { BSP_IO_PORT_09_PIN_00,  P900 }, /*   D26    |             */
  { BSP_IO_PORT_02_PIN_04,  P204 }, /*   D27    |             */
  { BSP_IO_PORT_03_PIN_15,  P315 }, /*   D28    |             */
  { BSP_IO_PORT_04_PIN_07,  P407 }, /*   D29    |             */
  { BSP_IO_PORT_04_PIN_08,  P408 }, /*   D30    |             */
  { BSP_IO_PORT_01_PIN_10,  P110 }, /*   D31    |             */
  { BSP_IO_PORT_00_PIN_06,  P006 }, /*   D32    |             */
  { BSP_IO_PORT_00_PIN_05,  P005 }, /*   D33    |             */
  { BSP_IO_PORT_00_PIN_04,  P004 }, /*   D34    |             */
  { BSP_IO_PORT_00_PIN_02,  P002 }, /*   D35    |             */
  { BSP_IO_PORT_06_PIN_05,  P605 }, /*   D36    |             */
  { BSP_IO_PORT_06_PIN_08,  P608 }, /*   D37    |             */
  { BSP_IO_PORT_03_PIN_11,  P311 }, /*   D38    |             */
  { BSP_IO_PORT_00_PIN_09,  P009 }, /*   D39    |             */
  { BSP_IO_PORT_04_PIN_09,  P409 }, /*   D40    |             */
  { BSP_IO_PORT_05_PIN_05,  P505 }, /*   D41    |             */
  { BSP_IO_PORT_07_PIN_06,  P706 }, /*   D42    |             */
  { BSP_IO_PORT_07_PIN_07,  P707 }, /*   D43    |             */
  { BSP_IO_PORT_07_PIN_08,  P708 }, /*   D44    |             */
  { BSP_IO_PORT_08_PIN_02,  P802 }, /*   D45    |             */
  { BSP_IO_PORT_04_PIN_00,  P400 }, /*   D46    |             */
  { BSP_IO_PORT_08_PIN_00,  P800 }, /*   D47    |             */
  { BSP_IO_PORT_05_PIN_11,  P511 }, /*   D48    |             */
  { BSP_IO_PORT_05_PIN_12,  P512 }, /*   D49    |             */
  { BSP_IO_PORT_03_PIN_02,  P302 }, /*   D50    |             */
  { BSP_IO_PORT_03_PIN_01,  P301 }, /*   D51    |             */
  { BSP_IO_PORT_02_PIN_02,  P202 }, /*   D52    |             */
  { BSP_IO_PORT_02_PIN_03,  P203 }, /*   D53    |             */
  { BSP_IO_PORT_06_PIN_10,  P610 }, /*   D54    |             */
  { BSP_IO_PORT_06_PIN_09,  P609 }, /*   D55    |             */
  { BSP_IO_PORT_06_PIN_13,  P613 }, /*   D56    |             */
  { BSP_IO_PORT_06_PIN_14,  P614 }, /*   D57    |             */
  { BSP_IO_PORT_06_PIN_11,  P611 }, /*   D58    |             */
  { BSP_IO_PORT_04_PIN_04,  P404 }, /*   D59    |             */
  { BSP_IO_PORT_05_PIN_06,  P506 }, /*   D60    |             */
  { BSP_IO_PORT_05_PIN_03,  P503 }, /*   D61    |             */
  { BSP_IO_PORT_05_PIN_02,  P502 }, /*   D62    |             */
  { BSP_IO_PORT_08_PIN_05,  P805 }, /*   D63    |             */
  { BSP_IO_PORT_05_PIN_13,  P513 }, /*   D64    |             */
  { BSP_IO_PORT_05_PIN_08,  P508 }, /*   D65    |             */
  { BSP_IO_PORT_05_PIN_05,  P500 }, /*   D66    |             */
  { BSP_IO_PORT_06_PIN_04,  P604 }, /*   D67    |             */
  { BSP_IO_PORT_01_PIN_15,  P115 }, /*   D68    |             */
  { BSP_IO_PORT_09_PIN_08,  P908 }, /*   D69    |             */
  { BSP_IO_PORT_04_PIN_03,  P403 }, /*   D70    |             */
  { BSP_IO_PORT_09_PIN_01,  P901 }, /*   D71    |             */
  { BSP_IO_PORT_06_PIN_12,  P612 }, /*   D72    |             */
  { BSP_IO_PORT_03_PIN_12,  P312 }, /*   D73    |             */
  { BSP_IO_PORT_03_PIN_06,  P306 }, /*   D74    |             */
  { BSP_IO_PORT_03_PIN_07,  P307 }, /*   D75    |             */
  { BSP_IO_PORT_10_PIN_01,  PA01 }, /*   D76    |             */
  { BSP_IO_PORT_10_PIN_08,  PA08 }, /*   D77    |             */
  { BSP_IO_PORT_10_PIN_09,  PA09 }, /*   D78    |             */
  { BSP_IO_PORT_10_PIN_10,  PA10 }, /*   D79    |             */
  { BSP_IO_PORT_05_PIN_07,  P507 }, /*   D80    |             */
  { BSP_IO_PORT_11_PIN_00,  PB00 }, /*   D81    |             */
  { BSP_IO_PORT_06_PIN_15,  P615 }, /*   D82    |             */
  { BSP_IO_PORT_00_PIN_08,  P008 }, /*   D83    |             */
  { BSP_IO_PORT_04_PIN_13,  P413 }, /*   D84    |             */
  { BSP_IO_PORT_04_PIN_12,  P412 }, /*   D85    |             */
  { BSP_IO_PORT_04_PIN_11,  P411 }, /*   D86    |             */
  { BSP_IO_PORT_04_PIN_10,  P410 }, /*   D87    |             */
  { BSP_IO_PORT_02_PIN_06,  P206 }, /*   D88    |             */
  { BSP_IO_PORT_02_PIN_05,  P205 }, /*   D89    |             */
  { BSP_IO_PORT_04_PIN_15,  P415 }, /*   D90    |             */
  { BSP_IO_PORT_04_PIN_14,  P414 }, /*   D91    |             */
  { BSP_IO_PORT_10_PIN_00,  PA00 }, /*   D92    |             */
  { BSP_IO_PORT_06_PIN_07,  P607 }, /*   D93    |             */
  { BSP_IO_PORT_06_PIN_06,  P606 }, /*   D94    |             */
  { BSP_IO_PORT_08_PIN_01,  P801 }, /*   D95    |             */
  { BSP_IO_PORT_03_PIN_10,  P310 }, /*   D96    |             */
  { BSP_IO_PORT_03_PIN_09,  P309 }, /*   D97    |             */
  { BSP_IO_PORT_00_PIN_10,  P010 }, /*   D98    |             */
  { BSP_IO_PORT_02_PIN_07,  P207 }, /*   D99    |             */
  { BSP_IO_PORT_08_PIN_03,  P803 }, /*   D100   |             */
  { BSP_IO_PORT_08_PIN_04,  P804 }, /*   D101   |             */
  { BSP_IO_PORT_08_PIN_06,  P806 }, /*   D102   |             */
  { BSP_IO_PORT_01_PIN_04,  P104 }, /*   D103   |             */
  { BSP_IO_PORT_05_PIN_04,  P504 }, /*   D104   |             */
  { BSP_IO_PORT_09_PIN_06,  P906 }, /*   D105   |             */
  { BSP_IO_PORT_04_PIN_05,  P405 }, /*   D107   |             */
  { BSP_IO_PORT_04_PIN_06,  P406 }, /*   D108   |             */
  { BSP_IO_PORT_07_PIN_00,  P700 }, /*   D109   |             */
  { BSP_IO_PORT_07_PIN_01,  P701 }, /*   D110   |             */
  { BSP_IO_PORT_07_PIN_02,  P702 }, /*   D111   |             */
  { BSP_IO_PORT_07_PIN_03,  P703 }, /*   D112   |             */
  { BSP_IO_PORT_07_PIN_04,  P704 }, /*   D113   |             */
  { BSP_IO_PORT_07_PIN_05,  P705 }, /*   D114   |             */
  { BSP_IO_PORT_03_PIN_05,  P305 }, /*   D116   |             */
};

extern "C" {
    unsigned int PINCOUNT_fn() {
        return (sizeof(g_pin_cfg) / sizeof(g_pin_cfg[0]));
    }
}

int32_t getPinIndex(bsp_io_port_pin_t p) {
  int max_index = PINS_COUNT;
  int rv = -1;
  for(int i = 0; i < max_index; i++) {
    if(g_pin_cfg[i].pin == p) {
      rv = i;
      break;
    }
  }
  return rv;
}

void initVariant() {

  // bootloader configures LED_BUILTIN as PWM output, deconfigure it to avoid spurious signals
  pinMode(LED_BUILTIN, INPUT);
}
