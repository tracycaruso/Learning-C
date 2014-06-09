//  Learning-C-Practice
//  C Components
//  Chapter 2 - Teach Yourself C in 21 Days
//  Exercise 2

//  Prints Title with a Asterik Border

#include <stdio.h>

// function prototype
void display_line(void);

int main(void){
    
    // calls function
    display_line();
    
    // prints line
    printf("\n Teach Yourself C in 21 Days!\n");
    
    // calls function
    display_line();
    
    // adds line break
    printf("\n");
    
    
    return 0;
}

// function definition - returns nothing - takes no arguments
void display_line(void){
    
    // declare variable
    int counter;
    
    // prints 30 asterisks
    for(counter = 0; counter < 30; counter++){
        printf("*" );
    }
    
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


