/***************************** VOCAB *******************************/

//  BasicProgram.c
//  Learning-C-Practice
//
//  Bubble Sort
//  Chapter 23 - Absolute Beginners Guide to C
//



#include "stdio.h"
#include "stdlib.h"



int main (void){
    int ctr, inner, outer, didSwap, temp;
    int nums[10];
    
    // Picks 10 random numbers and stores them as elements in the nums array
    for(ctr = 0; ctr < 10; ctr++){
        nums[ctr] = (rand() %99) + 1;
    }
    // Prints unsorted numbers
    for(ctr = 0; ctr < 10; ctr++){
        printf("%d \n" , nums[ctr]);
    }
    
    // Loops through 9 times
    for(outer = 0; outer < 9; outer++){
        // resets the didSwap variable 2 false
        didSwap = 0;
        // this will execute 10 times each time the outer loop is called
        for(inner = outer; inner <10; inner++){
            // checks to see if the outer value is larger then the inner values
            if (nums[outer] > nums[inner]){
                // stores the larger value in a temperary variable
                temp = nums[inner];
                // places the smaller value in the inner element
                nums[inner] = nums[outer];
                // places the larger value in the outer element
                nums[outer] = temp;
                // tells the program a swap took place
                didSwap = 1;
            }
            
        }
        // if no swap took place the program is sorted, the the program terminates
        if(didSwap == 0){
            break;
        }
    }
    
    // prints the sorted values
    for(ctr = 0; ctr < 10; ctr++){
        printf(": %d \n" , nums[ctr]);
    }
    return 0;
    
    
}



/***************************** VOCAB *******************************/
// Sorting : ordering lists of values
