//  Learning-C-Practice
//  Working with Arrays
//  Chapter 7
//  7.7
//  Base Conversion

/************************************  Algorithm ************************************/
//  A digit of the converted number is obtained by taking the modulo of the
//  number by the base. The number is then divided by the base, with any fractional
//  remainder discared, and the process is repeated until the number reaches zero



#include <stdio.h>

int main (void){
    
    int i, number, base, digit[5];
    
    number = 15;
    base = 8;
    
    for(i = 4; i >= 0; i--){
        digit[i] = number % base;
        number = number / base;
        
    }
    
    for( i = 0; i < 5; i++){
        printf("%i", digit[i]);
    }
    
    
    
    return 0;
}