//  Learning-C-Practice
//  Getting Started
//  Chapter 1 - Teach Yourself C in 21 Days
//  Exercise 2

//  Program Finds the Area of a Circle


#include "stdio.h"

int radius, area;

int main (void){
    
    // Prompt user for radius, store value in the radius variable
    printf("Enter radius (i,e, 10): ");
    scanf( "%d", &radius);
    
    // Multiplies PI by the radius twice, typecast result to integer value type, store in area variable
    area = (int) (3.14159 * radius * radius);
    
    // Return Area
    printf("\n\nArea = %d\n", area );
    
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


