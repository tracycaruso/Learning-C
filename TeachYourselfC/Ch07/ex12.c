//  Learning-C-Practice
//  Reading & Writing
//  Chapter 7 - Teach Yourself C in 21 Days
//
//  Exercise 12

//  Find the largest and smallest numbers - My Answer


#include <stdio.h>

int main (void){
    
    
    // Declare Variables
    int array[6], number = 1, large = 0, small = 0, i;
    
    // As long as number is not 0, loop through 6 times
    for( i = 0; i < 6 && number != 0; i++){
        printf("Enter a positive even integer : ");
        // store user value in number place holder
        scanf("%d", &number);
        
        // if the number is not positive or even and it is not 0, prompt user for correct response
        // repeat until conditions are met
        while ((number < 0 || number % 2 == 1) && number != 0){
            printf("That was not a positive even integer!\n");
            printf("Enter a positive even integer : ");
            scanf("%d", &number);
        }
        // store final correct number it the current array position
        array[i] = number;
    }
    
    // Find Largest Number - Compare numbers to current largest number, replace number if larger value is found
    for (i = 0; i < 6 && number != 0; i++){
        if(array[i] > large){
            large = array[i];
        }
    }
    // set the smallest number to the largest value
    small = large;
    // compare each number to current smalles number, replace number if smaller value is found
    for (i = 0; i < 6 && number != 0; i++){
        if(array[i] < small){
            printf("array : %d\n" , array[i]);
            small = array[i];
            printf("small : %d\n" , small);
        }
    }
    // As long as user did not exit print the largest and smallest numbers
    if( number != 0){
        printf("The largest number is : %d\n" ,large);
        printf("The smallest number is : %d\n" ,small);
    }
    
    return 0;
    
    
}

/***************************** VOCAB *******************************/
// Format String : the first argument in functions like printf(), they instruct the other arguments on what to do
// Newline Character : \n  creates a newline
// Escape Sequence : formatting control \n \t ...
// Conversion Specifier (Conversion Character) : tells functions how to interpret variables
// puts() : can display messages, but not numbers... uses less overhead than printf()
