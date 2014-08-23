//  Learning-C-Practice
//  Variables, Data Types and Arithmetic Expressions
//  Chapter 5
//  5.4
//  User Input

#include <stdio.h>

int main(void){
    
    int n, number, triangularNumber;
    
    printf("What triangular number do you want? ");
    scanf("%i", &number);
    
    triangularNumber = 0;
    
    for(n = 1; n <= number; n++){
        triangularNumber += n;
    }
    
    printf("The triangular number for %i is %i\n", number, triangularNumber);
    
    
    
    
    
    
    return 0;
}