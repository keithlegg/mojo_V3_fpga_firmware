
#include <avr/io.h>
#include <util/delay.h>

// #undef F_CPU
// #define F_CPU 8000000UL



// You turn it into an input without the pull-up enabled. That is you set both the DDR and PORT bit for the pin in question to 0. AVR pins can have one of four states:
// DDR PORT
//  0    0  - input, high impedance
//  0    1  - input, pulled up
//  1    0  - output, driven low
//  1    1  - output, driven high

/*******************/

// set all ports to high-z 
void disable_all(void){
    DDRB = 0x00;
    DDRC = 0x00;  
    DDRD = 0x00; 
    //DDRF = 0x00;

    PORTB = 0x00;
    PORTC = 0x00;
    PORTD = 0x00;
    //PORTF = 0x00;             

}


/*******************/
int main(void) {
    disable_all();

    // DDRB = 0xFF; // make all 8 bits of B output
    // while (1) {
    //   PORTB ^= 0xFF; // XOR switches state of all B bits
    //   _delay_ms(250); // long enough for human eye
    // }
}