//  Learning-C-Practice
//  Functions
//  Chapter 5 - Teach Yourself C in 21 Days
//  5.2

//  Splits a number in half


#include <stdio.h>

// declare variables
float x = 3.5, y = 65.11, z;

// function prototype
float half_of(float k);

int main (void){
    
    // call the half_of function passing it an arugument of x - store the returned value in z
    z = half_of(x);
    printf("The value of z = %f\n", z);
    
    
    // call the half_of function passing it an arugument of y - store the returned value in z
    z = half_of(y);
    printf("The value of z = %f\n", z);
    
    return 0;
}

// define the function, the function header has one parameter with the float type, and returns a float type
float half_of(float k){
    return (k/2);
}






/***************************** VOCAB *******************************/

// Function : independed section of code that performs a specific task
// Function Header : first line of the function definition
// Structured Programming : individual program tasks are performed by independed sections of code
// Argument : values passed to a function
// Parameter : entry in a function header, place holder for an argument