//  Learning-C-Practice
//  Reading & Writing
//  Chapter 7 - Teach Yourself C in 21 Days
//
//  Exercise 5

//  Collect Even Integer and Return and Output Input to screen


#include <stdio.h>

int main (void){
    // declare variables
    int array[6], x, number;
    
    // as long as x is less than six and number is not 99 loop through
    for(x = 0; x < 6 && number != 99; x++){
        
        // Prompt user for even value
        puts("Enter an even integer value or 99 to quit: ");
        
        // Store value in number variable
        scanf("%d", &number);
        
        // check to see if number is odd or and not 99
        while(number % 2 == 1 && number != 99){
            // prompt user for even number
            printf("\n%d is not even, Please enter an even number : ", number);
            // store new number in variable
            scanf("%d", &number);
        }
        // take final even number and store in array
        array[x] = number;
    }
    // print stored numbers
    for(x = 0; x < 6 && array[x] != 99; x++){
        printf("\nThe value entered is %d", array[x]);
    }
    
    return 0;
}

/***************************** VOCAB *******************************/
// Format String : the first argument in functions like printf(), they instruct the other arguments on what to do
// Newline Character : \n  creates a newline
// Escape Sequence : formatting control \n \t ...
// Conversion Specifier (Conversion Character) : tells functions how to interpret variables
// puts() : can display messages, but not numbers... uses less overhead than printf()
