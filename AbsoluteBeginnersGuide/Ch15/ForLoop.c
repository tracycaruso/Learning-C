//  BasicProgram.c
//  Learning-C-Practice
//
//  For Loop
//
//  Chapter 15 - Absolute Beginners Guide to C
//


#include <stdio.h>

int main (void)
{
    
    int currentChapter, ctr;
    
    printf("What number chapter are you on? ");
    scanf(" %d" , &currentChapter);
    
    // Checks to see if ctr is less than the current chapter
    // If so it moves to the next line and prints "You have finished chapter ...
    // The chapter number changes as the ctr changes
    // At the end of each loop the ctr is incremented by one
    // Then the condition is tested again
    // This continues until the condition is no longer true
    for(ctr = 1; ctr <= currentChapter; ctr++){
        printf("You have finished chapter %d! \n" , ctr);
        
        
        return 0;
        
    }
    
    
    
}



/***************************** VOCAB *******************************/

// For Loop : executes through a block of code while a condition is met
// Requires intitial, condition, increment
// Similar to a while loop

// Nesting : to put a loop inside another loop