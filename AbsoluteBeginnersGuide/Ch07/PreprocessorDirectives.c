//  BasicProgram.c
//  Learning-C-Practice
//
//  Preprocessor Directives
//  Chapter 7 - Absolute Beginners Guide to C
//


// This header is the standard inupt, output header
// Used for C's most common functions

#include <stdio.h> // can also be included this way : #include "stdio.h"


int main (void)
{
    // Constants are things that will never change, there will always be 12 months in a year
    // It is best define contant name with uppercase letters to differentiate them from variables
    // Do not add ; to the end of contant definitions
    
    #define DAYS_IN_YEAR 365 // if this was a real program you would have to make an exeption for leap year!
    #define WEEKS_IN_YEAR 52
    #define MONTHS_IN_YEAR 12
    
    printf("There are %d days, %d weeks, and %d months in a year. \n" , DAYS_IN_YEAR , WEEKS_IN_YEAR , MONTHS_IN_YEAR);
    
    return 0;
}



/***************************** VOCAB *******************************/

//  Preprocessor Directives : always begin with a # sign, and are executed when your program is being compiled
// not during run time

//  #include : merges header files with the program being compiled

//  Header Files : are reusable blocks of code are either included with your compiler or are made by the user

//  #define : this preprocessor directive is used for defining constants

//  Constant : a constant a named literal, it is data that does not change

