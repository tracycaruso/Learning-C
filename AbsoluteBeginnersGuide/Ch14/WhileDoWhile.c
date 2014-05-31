//  BasicProgram.c
//  Learning-C-Practice
//
//  While & Do While
//
//  Chapter 14 - Absolute Beginners Guide to C
//


#include <stdio.h>

int main (void)
{
    int num = 0;
    
    // While number is less than 20 loop through body increment num by one until it reaches 20
    while(num <= 20){
        printf(" %d\n" , num);
        num++;
    }
    
    // Print num and if it is more than 0 decrement by one until it reachs 0
    do{
        printf("| %d\n" , num);
        num--;
    } while(num >= 0);
    
    
    return 0;
}



/***************************** VOCAB *******************************/

// Infinite Loop : a loop that executes forever

// While Loop : executes while a condition is true, never executes if condition is not met

// Do While : executes at least once and then continues to execute if condition is true, stops when contition is not met
