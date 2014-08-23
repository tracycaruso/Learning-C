//  Learning-C-Practice
//  Characters & Strings
//  Chapter 10 Review - Teach Yourself C in 21 Days
//  10.5

// Shows how to use puts with character pointers

#include <stdio.h>

// creates a char array that can hold upto 80 characters plus a null zero
char input[81];

int main(void){
    
    // prompts user
    puts("Enter some text, then press Enter: ");
    
    // stores users input up until the new line character (enter key) in the input char array, replaces the new line character with a null char
    gets(input);
    
    // returns the input string up until the null character
    printf("You entered: %s\n", input);
    
    return 0;
}

/***************************** VOCAB *******************************/
// Character : Single Letter, Numeral, Puncutation Mark or other Symbol
// String : andy sequence of charcters
// ASCII character set : 0 - 255 code values that represent letters, digits, punctuation, and other symbols
// Dynamic Allocation : allocate space to a program while the program is executing
// malloc() : memory allocation function