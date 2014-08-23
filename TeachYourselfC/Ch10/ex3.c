//  Learning-C-Practice
//  Characters & Strings
//  Chapter 10 Review - Teach Yourself C in 21 Days
//  10.7

//

#include <stdio.h>
#include <stdlib.h>

// declare pointer
char *ptr;


int main (void){
    
    
    // allow point to hold 19 consecutive memory locations
    ptr = malloc(19 * sizeof(char));
    
    
    
    // check to see if memory is available
    if ( ptr == NULL){
        printf("Error");
        return 0;
    }
    
    // store string of up to 18 characters in allocated memory
    ptr = "Learning C is fun";
    
    
    
    // Print String to screen
    puts(ptr);
    
    
    
    free(ptr);
    
    
    
    return 0;
    
}

/***************************** VOCAB *******************************/
// Character : Single Letter, Numeral, Puncutation Mark or other Symbol
// String : andy sequence of charcters
// ASCII character set : 0 - 255 code values that represent letters, digits, punctuation, and other symbols
// Dynamic Allocation : allocate space to a program while the program is executing
// malloc() : memory allocation function