//  BasicProgram.c
//  Learning-C-Practice
//
//  The Heap
//  Chapter 26 - Absolute Beginners Guide to C
//



#include "stdio.h"
// required for free and malloc functions
#include "stdlib.h"
int main (void){
    
    int * iPtr;
    float * fPtr;
    double * dPtr;
    int ctr;
    
    // Reserves a set on continuous memory to the iPtr pointer
    // 100 units the size of intergers is the amount of space
    // and that value needs to be type casted as an integer as malloc normally returns a character value
    iPtr = (int *)malloc(100 * sizeof(int));
    
    // if iPrt does not have any value... dont allocate memory
    if(!iPtr)
    {
        puts("The integer allocation failed.");
        exit(1);
    }
    
    fPtr = (float *)malloc(50 * sizeof(float));
    if(!fPtr)
    {
        puts("The integer allocation failed.");
        exit(1);
    }
    
    
    dPtr = (double *)malloc(450 * sizeof(double));
    if(!dPtr)
    {
        puts("The integer allocation failed.");
        exit(1);
    }
    
    // Initializes Pointer Arrays with data
    
    for(ctr = 0; ctr < 100; ctr++)
    {
        iPtr[ctr] = ctr;
    }
    
    for(ctr = 0; ctr < 50; ctr++)
    {
        *(fPtr + ctr) = (float)ctr;
    }
    
    
    for(ctr = 0; ctr < 450; ctr++)
    {
        dPtr[ctr] = (double)ctr;
    }
    
    
    // Frees up the memory again so other programs can use it
    free(iPtr);
    free(fPtr);
    free(dPtr);
    
    
    
    
    
    
    
    return 0;
}



/***************************** VOCAB *******************************/

// Heap : collection of unused memory with in a computer
// Free Heap / Unallocated Heap : unused memory
// Allcocted Heap : part of the heap being used by a program

// malloc() : used to allocate memory
// free() : used to free memory