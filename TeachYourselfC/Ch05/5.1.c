//  Learning-C-Practice
//  Functions
//  Chapter 5 - Teach Yourself C in 21 Days
//  5.1

//  Returns a cubed integer


#include <stdio.h>

// Function Prototype
long cube(long x);

long input, answer;

int main (void){
    
    // Prompt user for value and store in the input variable
    printf("Enter and integer value: ");
    scanf("%ld", &input);
    
    // call the cube function and store the returned value in the answer variable
    answer = cube(input);
    
    
    // return starting and ending value
    printf("\nThe cube of %ld is %ld.\n", input, answer);
    
    return 0;
    
}

// function definition, function returns a long and takes an argument with a long type
long cube(long x)
{
    long x_cubed;
    
    x_cubed = x * x * x;
    
    return x_cubed;
}


/***************************** VOCAB *******************************/

// Function : independed section of code that performs a specific task