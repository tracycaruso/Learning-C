//  BasicProgram.c
//  Learning-C-Practice
//  Return Values and Prototypes.
//  Chapter 32 - Absolute Beginners Guide to C
//


#include "stdio.h"

// function prototype
float divideIt(float numFromMain);


int main(void){
    
    // declare variables
    float myNum, half;
    
    // prompt user for number to store in myNum
    printf("Please type a number: ");
    scanf(" %f", &myNum);
    
    // pass myNum to the divide it function and store the value in the half variable
    half = divideIt(myNum);
    
    // return the half variable which holds the return value from the divideIt function
    printf("Your number divided by two is %.1f.\n", half);
    return 0;
}


float divideIt(float numFromMain){
    
    // declare variable
    float halfNum;
    
    // store the passed value divided by 2.0 in the halfNum variable
    halfNum = numFromMain / 2.0;
    
    // return the halfNum value to the calling function
    return (halfNum);
}







/***************************** VOCAB *******************************/
// Prototype : a model of you function placed at the top of your program

