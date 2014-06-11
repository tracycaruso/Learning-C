//  Learning-C-Practice
//  Pointers
//  Chapter 9 Review - Teach Yourself C in 21 Days
//  9.5

// Find the largest number using a line marker


#include <stdio.h>

// define constants
#define MAXX 10

// declare array
int array[MAXX + 1]; // add one space to make room for marker

// declare variables
int count;

// function prototype
int largest(int num_array[]);

int main(void){
    
    // as long as count is less than the MAXX value iterate though loop (ten times)
    for(count = 0; count < MAXX; count++){
        
        // prompt user for value and store in current element of the array
        printf("Type 0 to exit or enter an integer value: ");
        scanf("%d", &array[count]);
        printf("index : %d\n", count);
        
        // exit loop
        if(array[count] == 0){
            count = MAXX;
        }
        
        
    }
    // set the last element in the array to zero
    array[MAXX] = 0;
    
    printf("\n\nLargest value = %d\n", largest(array));
    
    return 0;
}

// function header takes one array parameter
int largest(int num_array[]){
    
    // declare variables
    int count, biggest = -12000;
    
    // as long as the current element is not equal to 0 (the marker added to signal the end) iterate though loop
    for(count = 0; num_array[count] !=0; count++){
        
        // if the current array element's value is larger than the biggest variable
        if(num_array[count] > biggest){
            
            // assign the current array element's value to the biggest variable
            biggest = num_array[count];
        }
    }
    
    // return the largest number to the calling function
    return biggest;
}



/***************************** VOCAB *******************************/

// Pointer : a variable that contains the address of another variable
// * Indirection Operator : used to declare pointers
// & Address of Operator : used to return the address of a variable
// Direct Access : using the variable name to access its contents
// Indirect Access (Indirection) : using a pointer to access a variables contents

