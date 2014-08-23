//  Learning-C-Practice
//  Variables, Data Types and Arithmetic Expressions
//  Chapter 5
//  5.8
//  Reversing the Digits of a number

#include <stdio.h>

int main(void){
    
    // declare variables
    int number, right_digit;
    
    // store user input in number
    printf("Enter your number: \n");
    scanf("%i", &number);
    
    // as long number is not equal to 0
    while(number != 0){
        
        // the remainder of a number divided by ten will return the right most number
        // Ex : 1768 % 10 = 8
        right_digit = number % 10;
        
        // print the right number Ex : 8
        printf("%i", right_digit);
        
        // number is equal to 1760 / 10 = 176
        // moves number to next lowest 10ths place
        number = number / 10;
    }
    
    printf("\n");
    
    return 0;
}