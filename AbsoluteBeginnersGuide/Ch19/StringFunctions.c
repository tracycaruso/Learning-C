//  BasicProgram.c
//  Learning-C-Practice
//
//  String Functions
//
//  Chapter 19 - Absolute Beginners Guide to C
//


// When working with string functions always include the string.h header
#include "string.h"
#include "stdio.h"



int main (void){
    
    
    // declare character arrays -- leave extra space for future variable changes
    char firstName[30] = "Tracy";
    // leave empty space for concatenation
    char lastName[30] = " Caruso";
    int nameLength;
    
    // merge first name and last name together
    strcat(firstName, lastName);
    // firstName and lastName are now both stored in the firstName character array
    
    nameLength = strlen(firstName);
    
    printf("I am %s\n" , firstName);
    printf("My name is %d characters long. \n" , nameLength);
    
    
    return 0;
    
}



/***************************** VOCAB *******************************/


// strcat() : merges 2 character arrays as long as they hold strings - string concatenation

// strlen() : counts characters in string