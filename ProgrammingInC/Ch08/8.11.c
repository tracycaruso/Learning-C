//  Learning-C-Practice
//  Functions
//  Chapter 8
//  8.11
//  Changing Array Elements in Function


#include "stdio.h"

void multiplyBy2 (float array[], int n);

int main (void){
    
    // declare an array and populate it with values
    float floatVals[4] = {10.1, 2.4, 5.6, 9.0};
    int i;
    
    // pass array and array length to multiplyBy2()
    multiplyBy2(floatVals, 4);
    
    // prints out the new array elements... that have now been multiplied by 2
    for(i = 0; i < 4; i++){
        printf("%.2f ", floatVals[i]);
    }
    
    printf("\n");
    
    return 0;
}

// this function takes the current values in an array and multiplies them by two
// unlike normal variables, this function will change the values stored in the array
void multiplyBy2 (float array[], int n){
    int i;
    
    for(i = 0; i < n; i++){
        array[i] *= 2;
    }
    
    array[3] = 0;
}