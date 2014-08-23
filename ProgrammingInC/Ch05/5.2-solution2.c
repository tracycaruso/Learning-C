//  Learning-C-Practice
//  Variables, Data Types and Arithmetic Expressions
//  Chapter 5
//  5.2
//  Calculate a Triangular Number

#include <stdio.h>

int main (void){
    
    int n, triangularNumber;
    
    // set starting triangular number to 0
    triangularNumber = 0;
    
    
    // Loop through 8 times
    for(n = 1; n <= 8; n++){
        
        printf("=====================\n");
        
        // EX : 0 = 0 + 1
        // EX : 1 = 1 + 2
        printf("Before : %2i = %2i + %2i \n" , triangularNumber, triangularNumber, n );
        
        
        triangularNumber = triangularNumber + n;
        
        // EX : 1 = 0 + 1
        // EX : 3 = 1 + 2
        printf("After  : %2i = %2i + %2i \n" , triangularNumber, triangularNumber, n );
        
    }
    
    printf("\n\nThe 8th triangular number is %i\n\n", triangularNumber);
    
    return 0;
    
    
}