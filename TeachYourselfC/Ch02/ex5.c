//  Learning-C-Practice
//  C Components
//  Chapter 2 - Teach Yourself C in 21 Days
//  Exercise 5

//  Should Return the length of a name but returns lldb // not sure why


#include <stdio.h>
#include <string.h>

int main(void){
    char buffer[256];
    
    printf("Enter your name and press <Enter>:\n");
    gets( buffer );
    
    printf("\nYour name has %d characters and spaces!", strlen(buffer));
    
    return 0;
    
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


