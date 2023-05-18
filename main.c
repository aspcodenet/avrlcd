#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>
#include "lcd.h"

#define BIT_SET(a, b) ((a) |= (1ULL << (b)))
#define BIT_CLEAR(a,b) ((a) &= ~(1ULL<<(b)))
#define BIT_FLIP(a,b) ((a) ^= (1ULL<<(b)))
#define BIT_CHECK(a,b) (!!((a) & (1ULL<<(b)))) 

// B (digital pin 8 to 13)
// C (analog input pins)
// D (digital pins 0 to 7)
// https://wokwi.com/projects/363070419462614017



int main(void)
{
  lcd_init();
  lcd_enable_blinking();
  lcd_enable_cursor();
  lcd_puts("Skriv in koden:");

    int num = 0;
   while(1) {
        _delay_ms(3000);
        num++;
        lcd_set_cursor(0,1);
        lcd_printf("Waiting: %d", num);
   }
	return 0;
}