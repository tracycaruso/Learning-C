//  BasicProgram.c
//  Learning-C-Practice
//
//  Compound Assignment & Typecasting
//
//  Chapter 10 - Absolute Beginners Guide to C
//


#include <stdio.h>

int main (void)
{
    
    int age;
    float dogAge;
    
    // Get age from user and stor in integer age variable
    printf("What is your age? ");
    scanf(" %d" , &age);
    
    
    // Typecaste the age variable to a float value for this equation
    // Store the result in the dogAge variable
    dogAge = (float)age / 7.0;
    
    // Return users age in dog years
    printf("You are %.1f in dog years! \n" , dogAge);
    
    return 0;
    
}



/***************************** VOCAB *******************************/

// Counter Variable : a variable that one is added to everytime a certain event takes place

// Increment : increase value

// Decrement : decrease value

// Compound Operators : short hand operators += , -=, *=, \=

// Typecasting : temporary changes data type to another data type, useful when doing math with different data types

