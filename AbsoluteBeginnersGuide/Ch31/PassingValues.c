//  BasicProgram.c
//  Learning-C-Practice
//  Agruments : Passing a Value
//  Chapter 31 - Absolute Beginners Guide to C
//


#include "stdio.h"

int half(int i);

int main (void){
    int i;
    printf("Please enter a number : ");
    scanf(" %d" , &i);
    
    half(i);
    printf("in main(), i is still %d.\n" , i);
    return 0;
}

int half(int i){
    i = i / 2;
    printf("Your value halved is %d.\n", i);
    return 0;
    
}






/***************************** VOCAB *******************************/
// Passing Arguements : passing a variable from one function to another
// you can pass arguments from a function to the other by value or by address

// Passing a Value : the value of the variable is passed not the variable its self

