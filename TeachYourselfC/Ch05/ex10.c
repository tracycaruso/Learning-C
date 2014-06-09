//  Learning-C-Practice
//  Functions
//  Chapter 5 - Teach Yourself C in 21 Days
//  Exercise 10
//

// Function that averages 5 numbers

#include <stdio.h>

float a, b, c, d, e, answer;

float average(float u, float v, float w, float x, float y);


int main (void){
    
    printf("Enter five floating point values: \n");
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
    
    answer = average(a, b, c, d, e);
    
    printf("%.2f", answer);
}

float average(float u, float v, float w, float x, float y){
    float answer;
    
    answer = (u + v + w + x + y)/5;
    return answer;
    
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