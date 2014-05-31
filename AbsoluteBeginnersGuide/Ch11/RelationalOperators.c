//  BasicProgram.c
//  Learning-C-Practice
//
//  Relational Operators
//
//  Chapter 11 - Absolute Beginners Guide to C
//


#include <stdio.h>

int main (void)
{
    float salary;
    
    
    printf("How much money did you make last year? ");
    scanf(" %f" , &salary);
    
    
    // This if statment uses a relational operator to check whether the user made more or less than $100,000
    if(salary > 100000.0)
    {
        // If the condition is true this gets printed
        printf("Lotsa moola! \n");
    }
    
    // If the condition is not true the next block of code is executed
    else
    {
        printf("Maybe you should have tried harder! \n");
    }
    
    
    return 0;
    
}



/***************************** VOCAB *******************************/

// Relational Operators : compare two values

// Block or Body : a group of c statments

// Compound Statement : one or more c statements enclosed by braces
