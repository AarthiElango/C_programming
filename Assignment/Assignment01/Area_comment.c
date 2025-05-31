#include <stdio.h>   // includes standard input output library for I/O operations
#define PI 3.14      // defines constant value for pi as 3.14 

int main() {
    int radius;       // integer variable to store value of radius 
    float area;       // floating-point variable to store value of area
    char unit;        // variable to store a character for unit

    printf("Enter radius of circle: ");                      // displays the message to user to provide input 
    scanf("%d", &radius);                                    // get input from user 

    printf("Enter unit of measurement (e.g., c for cm): ");  // displays the message to user to provide input with format 
    scanf(" %c", &unit);                                     // get input from user  

    area = PI * (float)(radius * radius);                    // calculates area of circle with typecast from int to float 

    printf("Size of float variable: %lu bytes\n", sizeof(area));   // displays the space occupied by area variable

    if (area > 0) {                                               // checks for valid value 
        printf("Area = %.2f %c%c\n", area, unit, 178);            // display value of area with unit and superscript 2 
    } else {                                                      // enters the block if area value is non-positive 
        printf("Invalid radius entered.\n");                      // displays invalid input message
    }

    return 0;   // end of program 
}

