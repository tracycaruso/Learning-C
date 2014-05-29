//  BasicProgram.c
//  Learning-C-Practice
//
//  Using the printf() library function and escape sequences
//  Chapter 4 - Absolute Beginners Guide to C
//

    // printf() produces output on your screen
    // It can send characters, numbers and words to the screen
    // General Format : printf( "controlString" [ , data ] );
    // It requires a controlString but the data following the controlString is optional



#include <stdio.h>

int main (void)
{
    /**** Escape Sequences are considered single characters in C ****/
    // All of the following statments use the n/ escape sequence to push the proceeding output to a new line
    
    // This statement uses the \t escape sequence to add tabs to the output
    // Output : Ready 	Set 	Go!
    printf("Ready \tSet \tGo!\n");
    
    
    // This statement uses the \a escape sequence to add an audible alert to the output
    // Output : Ring my charm! 
    printf("Ring my charm! \a\n");
    
    
    // This statment uses the \" escape sequence to add quotation marks to the output
    // Output : I said, "No way."
    printf("I said, \"No way.\"\n");
    
    
    // This statement uses the \\ escape sequence to add a backslash to the output
    // Output : \ means escape
    printf("\\ means escape\n");
    
    return 0;   
    
}


/***************************** VOCAB *******************************/

// controlString : describes the format of the data that follow, use to specify exactly how you want your data printed

// conversion character : used as a placeholder for different types of data