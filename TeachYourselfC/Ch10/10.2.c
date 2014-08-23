//  Learning-C-Practice
//  Characters & Strings
//  Chapter 10 Review - Teach Yourself C in 21 Days
//  10.2

// showcases the extended ASCII characters
#include <stdio.h>

unsigned char mychar;

int main(void){
    for(mychar = 180; mychar < 204; mychar++){
        printf("ASCII code %d is character : " , mychar);
        printf("%c\n", mychar);
    }
    
    return 0;
}


/***************************** VOCAB *******************************/
// Character : Single Letter, Numeral, Puncutation Mark or other Symbol
// String : andy sequence of charcters
// ASCII character set : 0 - 255 code values that represent letters, digits, punctuation, and other symbols
