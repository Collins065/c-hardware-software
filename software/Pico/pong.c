// ***************************** PONG  ************************************
//                   Complete the following parts:
// 1. SHAWN COLLINS
// 2. 4/16/24
// 3. This code creates a pong game

// Comment all of your code appropriately.

#include "pico/stdio.h"
#include "pico/stdio/driver.h"
#include "pico/stdlib.h"
#include "pico/bootrom.h"
#include "class/cdc/cdc_device.h"
#include "hardware/gpio.h"
#include "hardware/spi.h"
#include "pico/binary_info.h"
#include "Adafruit_ST7735.h"
#include "graphics.h"
#include "bootrom_api.h"
#include "tft_stdout.h"
#include <stdio.h>

// Prototypes for function go below this comment
int x;
signed char c;
uint32_t getnum(void);
signed char getkey(void);
signed char mapkey(signed char c);


int main(void)
{

	stdio_set_driver_enabled(&stdio_tft, true);

	sleep_ms(1000);
	Adafruit_ST7735_gpio_init();
	Adafruit_ST7735_initR(INITR_18GREENTAB);
	Adafruit_ST7735_setRotation(0);
	Adafruit_ST7735_fillScreen(0x0000);
	graphics_init(128, 160);
	graphics_setTextWrap(false);
	graphics_setTextColor(0xFFFF);
	graphics_setTextSize(1);


	return 0;

}

// New function go below this comment
uint32_t r=0;

//To reboot to flash
// will give me the number after the calculation
uint32_t r=0;
//return calulcated value
signed int v;
signed char val2=mapkey(getkey());
while (val2!='D'){
signed int v;
signed char val2=mapkey(getkey());
while (1) {
c=getkey();

if(val2=='*'){
jump_to_MSD();
// jump_to_MSD(); key to reboot the pico

return r;

}
