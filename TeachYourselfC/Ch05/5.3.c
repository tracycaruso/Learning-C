//  Learning-C-Practice
//  Functions
//  Chapter 5 - Teach Yourself C in 21 Days
//  5.3

//


#include <stdio.h>

// Declare Variables
int x = 1, y = 2;

// Function prototype, takes no arguments and returns nothing
void demo(void);

int main(void){
    
    // Shows that the variables used within the demo function don't effect the variables within the main function
    printf("\nBefore calling demo(), x = %d and y = %d.", x, y);
    demo();
    printf("\nAfter calling demo(), x = %d and y = %d.", x, y);
    
    return 0;
}

void demo(void){
    int x = 88, y = 99;
    
    printf("\nWithin demo(), x = %d and y = %d.", x, y);
}




/***************************** VOCAB *******************************/

// Function : independed section of code that performs a specific task
// Function Header : first line of the function definition
// Structured Programming : individual program tasks are performed by independed sections of code
// Argument : values passed to a function
// Parameter : entry in a function header, place holder for an argument
// Function Body : statements enclosed in braces that immediately follows the function header
// Local Variable : can only be used within the function it is enclosed in