//  Learning-C-Practice
//  Functions
//  Chapter 5 - Teach Yourself C in 21 Days
//  5.5

// finds the factorial of a number


#include <stdio.h>

unsigned int f, x;
unsigned int factorial(unsigned int a);

int main (void){
    puts("Enter an integer value between 1 and 8: ");
    scanf("%d", &x);
    
    
    if(x > 8 || x < 1){
        printf("Only values from 1 to 8 are acceptable!");
    }
    else{
        f = factorial(x);
        printf("%u factorial equals %u\n", x, f);
    }
    
    return 0;
}

unsigned int factorial(unsigned int a){
    if( a== 1)
        return 1;
    else{
        a *= factorial(a-1);
        return a;
    }
    
    
    /* Example
     
     4 *= factorial(4-1);
     4 * 3  *= factorial(3-1);
     4 * 3 * 2 *= factorial (2-1);
     4 * 3 * 2 = 24
     a = 24
     
     */
    
    
}

/***************************** VOCAB *******************************/

// Function : independed section of code that performs a specific task
// Function Header : first line of the function definition
// Structured Programming : individual program tasks are performed by independed sections of code
// Argument : values passed to a function
// Parameter : entry in a function header, place holder for an argument
// Function Body : statements enclosed in braces that immediately follows the function header
// Local Variable : can only be used within the function it is enclosed in
// Recursion : when a function calls itself
// Indirect Recursion : when one function calls another function that then calls the first function