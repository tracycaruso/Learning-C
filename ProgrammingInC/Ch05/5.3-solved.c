//  Learning-C-Practice
//  Variables, Data Types and Arithmetic Expressions
//  Chapter 5
//  5.3
//  Calculate a Triangular Number Table

#include <stdio.h>

int main(void){
    int n, triangularNumber;
    
    triangularNumber = 0;
    
    for ( n = 1; n <= 10; ++n){
        triangularNumber += n;
        printf("%i     %i\n", n, triangularNumber);
    }
    
    return 0;
}