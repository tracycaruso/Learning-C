//  BasicProgram.c
//  Learning-C-Practice
//
//  Arrays and Pointers
//  Chapter 25 - Absolute Beginners Guide to C
//



#include "stdio.h"




int main (void){
    
    int array[5] = {10,20,30,40,50}, i;
    
    for (i = 0; i < 5; i++){
        // print values using subscript
        printf("The value of element %d is %d : \n", i, array[i]);
    }
    
    printf("**********\n");
    
    for (i = 0; i < 5; i++){
        // print values using the derefencing operator
        printf("The value of element %d is %d : \n", i, *(array + i));
    }
    
    printf("**********\n");
    
    for (i = 0; i < 5; i++){
        // prints the location of each array value
        printf("The location of element %d is %d : \n", i, (array + i));
    }
    
    return 0;
    
    
}



/***************************** VOCAB *******************************/

// Array Name : pointer to the first element in that array, known as pointer constants