//  Learning-C-Practice
//  Functions
//  Chapter 8
//  8.10
//  Pass multiple arrays to functoin


#include "stdio.h"

int minimum(int values[], int numberOfElements);

int main (void){
    
    // declare 2 arrays
    int array1[5] = {157, -28, -37, 26, 10};
    int array2[7] = {12, 45, 1, 10, 5, 3, 22};
    
    
    // pass each array to minimum function
    // pass array length to function
    printf("Array 1 Minimum : %i\n", minimum(array1, 5));
    
    printf("Array 2 Minimum : %i\n", minimum(array2, 7));
    
    return 0;
    
}

// fuction takes 2 parameters.. the array.. and the array length
int minimum(int values[], int numberOfElements){
    
    int minValue, i;
    
    minValue = values[0];
    
    // use the length of the array to loop though current array
    for(i = 1; i < numberOfElements; i++){
        // compair minimum values
        if(values[i] < minValue){
            minValue = values[i];
        }
    }
    // return minimum values
    return minValue;
}