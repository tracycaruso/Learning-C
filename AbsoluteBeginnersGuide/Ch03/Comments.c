//  BasicProgram.c
//  Learning-C-Practice
//
//  Using white space and comments to make code more readable
//  Chapter 3 - Absolute Beginners Guide to C
//


#include <stdio.h>

int main (void)
{
    // This is a single line comment
    /* This is a multiple 
       line comment */
    
    // Declare Variables
    int a, yrs;

    
    // Ask user their age
    printf("How old are you? ");
    
    
    // Use the conversion character %d to store the users age in variable with an integer data type
    scanf(" %d" , &a);
    
    
    // Checks to see if user is over 21, if so it returns 0, else it subtracks the user age from 21
    yrs = (a >= 21) ? 0 : 21 - a;
    
    
    // Returns years until adulthood
    printf("You have %d years until adulthood. \n" , yrs);
    
    
    return 0;
    
}