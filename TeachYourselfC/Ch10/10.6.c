//  Learning-C-Practice
//  Characters & Strings
//  Chapter 10 Review - Teach Yourself C in 21 Days
//  10.6

// Shows how to use puts with character pointers and register a blank line

#include <stdio.h>

// declare character variable that holds up to 256 chars, declare ptr pointer
char input[257], *ptr;

int main (void){
    
    // prompts user for input
    puts("Enter text a line at a time, then press Enter.");
    puts("Enter a blank line when done.");
    
    // gets(input) : store the users input in the input array up until the new line char then and null char
    // ptr = gets(input) : store inputs address in pointer
    // *(ptr = gets(input) : points to the first character in the input string
    // while( *(ptr = gets(input)) != NULL) : repeat this process until the first character in the string is null or a new line
    // the null character is added to the blank line because gets changes new line to null zero
    while( *(ptr = gets(input)) != NULL)
        printf("Your entered %s\n", input);
    
    // Once blank line is registered output to screen
    puts("Thank you and good-bye\n");
    
    return 0;
}





/***************************** VOCAB *******************************/
// Character : Single Letter, Numeral, Puncutation Mark or other Symbol
// String : andy sequence of charcters
// ASCII character set : 0 - 255 code values that represent letters, digits, punctuation, and other symbols
// Dynamic Allocation : allocate space to a program while the program is executing
// malloc() : memory allocation function