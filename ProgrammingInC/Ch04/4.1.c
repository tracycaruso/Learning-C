//  Learning-C-Practice
//  Variables, Data Types and Arithmetic Expressions
//  Chapter 4
//  4.1
//  Basic Data Types

#include <stdio.h>

int main (void){
    
    int integerVar = 100;
    float floatingVar = 331.79;
    double doubleVar = 8.44e+11;
    char charVar = 'W';
    
    _Bool boolVar = 0;
    
    printf("integerVar = %i \n", integerVar );
    printf("floatingVar = %f \n", floatingVar);
    
    // %e uses scientific notation
    printf("doubleVar = %e \n", doubleVar);
    
    // %g printf chooses between %f and %e and also automatically removes from the display any trailing zeros
    printf("doubleVar = %g \n", doubleVar);
    printf("charVar = %c \n", charVar);
    
    
    // _Bool uses integer format
    printf("boolVar = %i \n", boolVar);
    
    return 0;
    
    
    
}