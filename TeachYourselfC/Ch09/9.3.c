//  Learning-C-Practice
//  Pointers
//  Chapter 9 Review - Teach Yourself C in 21 Days
//  9.3

// Example of Pointer Arithmetic


#include <stdio.h>

#define MAXX 10

// Declare integer array
int i_array[MAXX] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 , 9 };

// Declare integer pointer & variable
int *i_ptr, count;

// Declare floating point array
float f_array[MAXX] = { .0, .1, .2, .3, .4, .5, .6, .7, .8, .9 };

// Declare floating point pointer
float *f_ptr;


int main(void){
    
    // Assign variable locations to pointers
    i_ptr = i_array;
    f_ptr = f_array;
    
    // Loop though 10 times
    for(count = 0; count < MAXX; count++){
        
        // Increment pointers to access array elements
        printf("%d\t%f\n", *i_ptr++, *f_ptr++);
        
        
    }
    
    return 0;
}




/***************************** VOCAB *******************************/

// Pointer : a variable that contains the address of another variable
// * Indirection Operator : used to declare pointers
// & Address of Operator : used to return the address of a variable
// Direct Access : using the variable name to access its contents
// Indirect Access (Indirection) : using a pointer to access a variables contents

