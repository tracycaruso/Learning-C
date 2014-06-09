//  Learning-C-Practice
//  Functions
//  Chapter 5 - Teach Yourself C in 21 Days
//  Exercise 7
//


#include <stdio.h>

int a = 2, b = 8, answer;

int numProduct (int x, int y);

int main (void){
    
    numProduct(a, b);
    
    answer = numProduct(a, b);
    
    printf("%d\n", answer);
    
    return 0;
}

int numProduct(int x, int y){
    return x *= y;
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
// Inline Function : small functions that call themselves