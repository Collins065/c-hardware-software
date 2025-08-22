#include <avr/io.h>
#include <util/delay.h>

#define LED_PIN PB5  // Pin 13 on Arduino Uno corresponds to PB5

int main(void) {
    // Set LED_PIN as an output
    DDRB |= (1 << LED_PIN);

    while (1) {
        // Turn LED on
        PORTB |= (1 << LED_PIN);
        _delay_ms(1000);  // Delay for 1 second
        // Turn LED off
        PORTB &= ~(1 << LED_PIN);
        _delay_ms(1000);  // Delay for 1 second
        _delay_ms(50000);

    }

    return 0;
}
