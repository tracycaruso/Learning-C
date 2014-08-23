//  Learning-C-Practice
//  Working with Arrays
//  Chapter 7
//  7.7
//  Base Conversion


/************************************  Algorithm ************************************/
//  A digit of the converted number is obtained by taking the modulo of the
//  number by the base. The number is then divided by the base, with any fractional
//  remainder discared, and the process is repeated until the number reaches zero



#include "stdio.h"


int main (void){
    
    // make an array to store hex numbers
    char const charcterArr[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    
    // make an array to store digits
    int digits[100] = {[0] = 0};
    
    // declare variables for the Number, the Base, a counter, and a number holder
    int base, i, currentDigit;
    long number;
    
    
    // prompt user for values & store values
    printf("What number? : ");
    scanf("%ld", &number);
    
    printf("What base? : ");
    scanf("%i", &base);
    
    
    // loop through number, to extract digits
    do
    {
        digits[i] = number % base;
        number = number / base;
        i++;
    }
    while(number != 0);
    
    
    // convert digit to corresponding character
    // print digit
    for(i--; i >= 0; i--){
        currentDigit = digits[i];
        printf("%c", charcterArr[currentDigit]);
    }
    
    printf("\n");
    
    return 0;
    
    
    
}
