//  Learning-C-Practice
//  Characters & Strings
//  Chapter 10 Review - Teach Yourself C in 21 Days
//  10.3

// using the malloc() function, prints the uppercase alphabet

#include <stdio.h>
#include <stdlib.h>

// declare char variable and pointers
char count, *ptr, *p;

int main(void){
    
    // allocate 35 memory locations the size of a character, and point ptr to that location
    // accounts for computers with different size data types
    ptr = malloc(35 * sizeof(char));
    
    // if there is not enough memory to do so return error
    if (ptr == NULL){
        puts("memory allocation error.");
        return 1;
    }
    
    // point p to ptr
    p = ptr;
    
    // loop though characters 65 - 91
    for (count = 65; count < 91; count++){
        // store each character in the next allocated memory space by incrementing the p point
        *p++ = count;
    }
    
    // Mark the end of the storage space with a null zero, creating a string of characters
    *p = '\0';
    
    // return the string p stored in the ptr pointer up until the null zero
    puts(ptr);
    
    // free the memory space just used
    free(ptr);
    
    return 0;
    
}

/***************************** VOCAB *******************************/
// Character : Single Letter, Numeral, Puncutation Mark or other Symbol
// String : andy sequence of charcters
// ASCII character set : 0 - 255 code values that represent letters, digits, punctuation, and other symbols
// Dynamic Allocation : allocate space to a program while the program is executing
// malloc() : memory allocation function