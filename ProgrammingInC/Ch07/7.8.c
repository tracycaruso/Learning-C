//  Learning-C-Practice
//  Working with Arrays
//  Chapter 7
//  7.8
//  Variable-Length Arrays





#include "stdio.h"


int main (void){
    
    int i, numFibs;
    
    // Prompt user for number of fibs
    
    printf("How many? :");
    scanf("%i", &numFibs);
    
    
    // check to see if number is between 1 - 75
    // if not produce error
    
    if(numFibs < 1 || numFibs > 75){
        printf("Error\n");
        return 1;
    }
    
    // declare array with number supplied by user
    
    unsigned long fib[numFibs];
    
    // set 1st & 2nd array element
    fib[0] = 0;
    fib[1] = 1;
    
    // store fib sequence in array
    for(i = 2; i < numFibs; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    
    
    // print fib sequence
    
    for(i = 0; i < numFibs; i++){
        printf("%lu\n", fib[i]);
    }
}
