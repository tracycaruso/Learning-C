//  Learning-C-Practice
//  Characters & Strings
//  Chapter 10 Review - Teach Yourself C in 21 Days
//  Ex 4


#include <stdio.h>
#include <stdlib.h>

int main (void){
    
    char string[80];
    
    printf("What are you thinking? : ");
    scanf("%s", string);
    
    printf("%s", string);
    
    
    
    /********* OR **********/
    /***********************
    /
    /   char *ptr;
    /   ptr = malloc(81);
    /   gets(ptr);
    /
    /***********************/
}







/***************************** VOCAB *******************************/
// Character : Single Letter, Numeral, Puncutation Mark or other Symbol
// String : andy sequence of charcters
// ASCII character set : 0 - 255 code values that represent letters, digits, punctuation, and other symbols
// Dynamic Allocation : allocate space to a program while the program is executing
// malloc() : memory allocation function