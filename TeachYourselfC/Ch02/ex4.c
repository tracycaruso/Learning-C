//  Learning-C-Practice
//  C Components
//  Chapter 2 - Teach Yourself C in 21 Days
//  Exercise 4

//  Prints the Uppercase Alphabet


#include <stdio.h>

int main(void){
    int ctr;
    
    // 65 is the corresponding ASCII character for A and 90 is the corresponding character for Z
    for( ctr = 65; ctr < 91; ctr++){
        // Prints the letter that matches the current counter numbers ASCII character
        printf("%c", ctr );
        
    }
    
    printf("\n");
    
    
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


