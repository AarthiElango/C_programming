#include <REGX51.h>  // Correct header for 8051 special function registers

void delay_10ms() {
    unsigned int i;
    for (i = 0; i < 3333; i++); 
    // Each iteration ≈ 3 microseconds
    // 3333 iterations × 3µs ≈ 10ms delay
}

void delay_1s() {
    int j;
    for (j = 0; j < 100; j++) {
        delay_10ms();
    }
    // 100 × 10ms = 1 second delay
}

void main() {
    while (1) {       // Infinite loop
        P1_0 = 0;      // Turn ON LED connected to P1.0
        delay_1s();    // Wait 1 second
        P1_0 = 1;      // Turn OFF LED
        delay_1s();    // Wait 1 second
    }
}

