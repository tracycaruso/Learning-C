//  Learning-C-Practice
//  Variables, Data Types and Arithmetic Expressions
//  Chapter 5
//  5.2
//  Calculate a Triangular Number : Book Answer

#include <stdio.h>

int main (void){
    
    int n, triangularNumber;
    
    triangularNumber = 0;
    
    for(n = 1; n <= 200; n=n+1){
        triangularNumber = triangularNumber + n;
    }
    
    printf("The 200th triangular number is %i\n", triangularNumber);
    
    return 0;
    
    
}