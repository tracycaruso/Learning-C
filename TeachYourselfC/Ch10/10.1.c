//  Learning-C-Practice
//  Characters & Strings
//  Chapter 10 Review - Teach Yourself C in 21 Days
//  10.1

// showcases the difference between char as a number value or character value
#include <stdio.h>

char c1 = 'a';
char c2 = 90;


int main(void){
    
    // a == ASCII 90
    printf("\nAs a character, variable c1 is %c" , c1);
    printf("\nAa a number variable c1 is %d", c1);
    
    // Z == ASCII 90
    printf("\nAs a character, variable c2 is %c" , c2);
    printf("\nAa a number variable c2 is %d", c2);
    
    return 0;
}




/***************************** VOCAB *******************************/
// Character : Single Letter, Numeral, Puncutation Mark or other Symbol
// String : andy sequence of charcters
// ASCII character set : 0 - 255 code values that represent letters, digits, punctuation, and other symbols
