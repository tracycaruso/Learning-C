//  Learning-C-Practice
//  Functions
//  Chapter 5 - Teach Yourself C in 21 Days
//  Exercise 8
//


#include <stdio.h>

int a, b, answer;

int numQuo(int x, int y);

int main (void){
    
    printf("Enter 2 integer values: ");
    scanf("%d%d", &a, &b);
    
    answer = numQuo(a,b);
    
    printf("%d\n", answer);
}

int numQuo(int x, int y){
    
    x = (y)? (x /= y) : x;
    return x;
    
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