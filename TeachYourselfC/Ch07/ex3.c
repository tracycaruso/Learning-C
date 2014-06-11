//  Learning-C-Practice
//  Reading & Writing
//  Chapter 7 - Teach Yourself C in 21 Days
//
//  Exercise 3

//  Collect Integer and Return and Output Input to screen


#include <stdio.h>

int main (void){
    int i;
    
    
    printf("Type an integer : ");
    scanf("%d" , &i);
    printf("%d\n", i);
    
    return 0;
}


/***************************** VOCAB *******************************/
// Format String : the first argument in functions like printf(), they instruct the other arguments on what to do
// Newline Character : \n  creates a newline
// Escape Sequence : formatting control \n \t ...
// Conversion Specifier (Conversion Character) : tells functions how to interpret variables
// puts() : can display messages, but not numbers... uses less overhead than printf()
