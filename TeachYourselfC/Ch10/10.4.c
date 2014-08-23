//  Learning-C-Practice
//  Characters & Strings
//  Chapter 10 Review - Teach Yourself C in 21 Days
//  10.4

// Shows how to use puts with character pointers

#include <stdio.h>


// characters point to the 1st character in each string and return the following characters up until the null zero
char *message1 = "C";
char *message2 = "is the";
char *message3 = "best";
char *message4 = "programming";
char *message5 = "language!!";

int main (void){
    // puts function automatically inserts a new line character at the end of each string it displays
    puts(message1);
    puts(message2);
    puts(message3);
    puts(message4);
    puts(message5);
    
    return 0;
}



/***************************** VOCAB *******************************/
// Character : Single Letter, Numeral, Puncutation Mark or other Symbol
// String : andy sequence of charcters
// ASCII character set : 0 - 255 code values that represent letters, digits, punctuation, and other symbols
// Dynamic Allocation : allocate space to a program while the program is executing
// malloc() : memory allocation function