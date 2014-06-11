//  Learning-C-Practice
//  Reading & Writing
//  Chapter 7 - Teach Yourself C in 21 Days
//
//  Exercise 12

//  Find the largest and smallest numbers - Book Answer


#include <stdio.h>


// define constants
#define MAX 100

// declare array
int array[ MAX ];

// declare variables
int count = -1, maximum, minimum, num_entered, temp;

int main (void){
    // Prompt user for values
    puts("Enter integer values one per line.");
    puts("Enter 0 when finished.");
    
    do{
        // find users imput and store in temp
        scanf("%d", &temp);
        // increment array and store current temp value
        array[++count] = temp;
        // as long as current count is less than the max value, and the current temp number isn't 0, loop again
    } while(count < ( MAX-1 ) && temp != 0);
    
    // store current count in number entered so the size of the array is known
    num_entered = count;
    
    // set max and mins to compare by
    maximum = -32000;
    minimum = 32000;
    
    // set counter to 0 and as long as the current counter is less than the array length, and the current number is not 0
    // loop though block
    for (count = 0; count <= num_entered && array[count] != 0; count++){
        // if current array number is more than the max number
        if(array[count] > maximum)
            // assign current number to maximum
            maximum = array[count];
        // if current array number is less than the min number
        if(array[count] < minimum)
            // assign current number to minimum
            minimum = array[count];
    }
    
    // print max and min values
    printf("\nThe max value is %d", maximum);
    printf("\nThe minimum value is %d\n", minimum);
    
    return 0;
    
    
    
}

/***************************** VOCAB *******************************/
// Format String : the first argument in functions like printf(), they instruct the other arguments on what to do
// Newline Character : \n  creates a newline
// Escape Sequence : formatting control \n \t ...
// Conversion Specifier (Conversion Character) : tells functions how to interpret variables
// puts() : can display messages, but not numbers... uses less overhead than printf()
