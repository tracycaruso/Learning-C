//  Learning-C-Practice
//  Working with Arrays
//  Chapter 7
//  7.5
//  Intalizing Arrays

//  The arrays subscript is the square route of the assiged values
#include <stdio.h>

int main (void){
    
    // intialize array and assign 5 out of 10 values
    int array_values[10] = {0, 1, 4, 9, 16};
    // counter variable
    int i;
    
    
    // initalize remaining 5 array elements
    for(i = 5; i < 10; ++i){
        array_values[i] = i * i;
    }
    
    // print array elements
    for( i = 0; i < 10; ++i){
        printf("array_values[%i] = %i\n", i, array_values[i]);
    }
    
    
    return 0;
}