//  BasicProgram.c
//  Learning-C-Practice
//
//  Break & Continue
//
//  Chapter 16 - Absolute Beginners Guide to C
//


#include <stdio.h>

int main (void)
{
    int i;
    
    // uses i to iterate through the loop up to 100 times
    for( i = 1; i < 100; i++){
        
        // Prints testing using the i variable to replace the current count
        printf("Testing %d\n" , i);
        
        // tests if the number is divisible by both 3 & 4
        // will break loop when this is true
        if((i % 3 == 0 ) && (i % 4) == 0)
        {
            printf("We got it!\n");
            break;
        }
        
        // tests whether condition is divisible by three
        // will start loop at the beginning if true
        if (i % 3 == 0)
        {
            printf("Only divisible by 3! \n");
            continue;
        }
        
        // tests whether condition is divisible by four
        // will start loop at the beginning if true
        if (i % 4 == 0)
        {
            printf("Only divisible by 4! \n");
            continue;
        }
        
        // if non of the previous conditions are met, this is executed and the loop starts again
        printf("I'm not divisible by those numbers! \n");
    }
    
    
    
}



/***************************** VOCAB *******************************/

// Break Statement : generally occurs in the body of an if or switch statement
// the break statement terminates the current loop


// Continue Statement : a continue statement forcest the loop to continue early. So rather than executing the rest of the
// code it continues back to the beginning

// Iteration : the cycle of a loop