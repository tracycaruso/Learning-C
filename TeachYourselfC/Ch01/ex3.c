//  Learning-C-Practice
//  Getting Started
//  Chapter 1 - Teach Yourself C in 21 Days
//  Exercise 3

//  Program prints 10 rows of 10 X's

#include "stdio.h"

int x, y;

int main (void){
    
    // Execute what ever is in this for loop 10 separate times
    for ( x = 0; x<10; x++, printf("\n")){
        
        // Every time previous loop is executed print 10 x's
        for( y = 0; y <10; y++){
            printf("X");
        }
    }
    
    return 0;
    
}





/***************************** VOCAB *******************************/
// Source Code : statements and commands that instruct your computer what to do
// Machine Language :binary code the computer understands, most basic computer language
// Compiler : converts source code to machine language
// Object Code : the code created by a compliler when coverting source code to machine language
// Object File : where object code is stored
// Predefined Function : ready to use code that can be used by the compiler
// Library Function : a predefined function, that perform frequently needed tasks
// Linking : the process of combining predefined functions and object code to create an executable
// program
// Linker : preforms linking activity


