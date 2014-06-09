//  Learning-C-Practice
//  C Components
//  Chapter 2 - Teach Yourself C in 21 Days
//  2.1

// Multiply 2 numbers

#include "stdio.h"

// declare variables
int val1, val2, val3;

// function prototype
int product(int x, int y);

int main ( void ){
    
    /* Get the first number */
    printf("Enter a number between 1 and 100: ");
    scanf("%d" , &val1);
    
    /* Get the second number */
    printf("Enter another number between 1 and 100: ");
    scanf("%d", &val2);
    
    /* Calculate and display the product */
    val3 = product(val1, val2);
    printf ( "%d times %d = %d\n", val1, val2, val3);
    
    return 0;
}

/* Function returns the product of the two values provided */
int product(int x, int y){
    return(x * y);
}




/***************************** VOCAB *******************************/
// Arguments : Information sent to a function
// User-Defined Functions : functions created by user
// Library Functions : functions that come with a compiler
// Include File (Header Files): separate file that can be used by compiler and program, can come with compiler or made by user
// #include : used to include or link header files to program
// Variable : name assigned to a location in memory to store information
// Function Prototype : provides the compiler with the name and agruments of a function
// Function Definition : statements that make up the function
// printf() : displays information on the screen
// scanf() : takes data from a user and assigns it to a variable
// Function : independent section of code used to perform a certain task
// Comment : used to increase the readability of a program
// Block : group of multiple C statements enclosed in curly braces


