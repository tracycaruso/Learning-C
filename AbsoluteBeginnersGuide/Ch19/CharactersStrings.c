//  BasicProgram.c
//  Learning-C-Practice
//
//  Characters & Strings
//
//  Chapter 19 - Absolute Beginners Guide to C
//


// When working with charcter functions always include the ctype.h header
#include "ctype.h"
#include "stdio.h"


int main (void){
    
    char inpt; 
    
    printf("Type a letter or a number: ");
    inpt = getchar();
    
    // Checks inpt for alphabetical letter
    if(isalpha(inpt))
    {
        // Checks inpt for uppercase letter
        if(isupper(inpt)){
            
            printf("You returned an uppercase letter. \n");
        }
        
        else{
            printf("You returned a lower case letter. \n");
        }
        
    }

    return 0;
}


/***************************** VOCAB *******************************/

// isalpha() : checks to see if there are alpabetic character
// isdigit() : checks to see if there is a numberic character
// isupper() : checks to see if letter is capitalized
// islower() : checks to see if letter is lower case

