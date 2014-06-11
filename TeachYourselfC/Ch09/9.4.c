//  Learning-C-Practice
//  Pointers
//  Chapter 9 Review - Teach Yourself C in 21 Days
//  9.4

// Using and Array in A function


#include <stdio.h>

// define constants
#define MAXX 10

// create int array and variable
int array[MAXX], count;

// function prototype
int largest(int num_array[], int length);

int main(void){
    // loop through 10 times
    for (count = 0; count < MAXX; count++){
        // Prompt user and store input in current array element
        printf("Enter an integer value: ");
        scanf("%d", &array[count]);
    }
    // Call Largest Array function, pass it array and arrays length
    printf("\nLargest value = %d\n", largest(array, MAXX));
    
    return 0;
    
}

// function header, takes array and arrays length as parameters
int largest(int num_array[], int length){
    
    // declare variables
    int count, biggest = -12000;
    
    // for as long as count is less than the arrays length iterate through
    for(count = 0; count < length; count++){
        // take the current element in the array argument and compair it to the biggest variable
        if(num_array[count] > biggest)
            // if the elements value is larger than the biggest variable, assign value to biggest
            biggest = num_array[count];
    }
    
    // return the largest number to the program
    return biggest;
}



/***************************** VOCAB *******************************/

// Pointer : a variable that contains the address of another variable
// * Indirection Operator : used to declare pointers
// & Address of Operator : used to return the address of a variable
// Direct Access : using the variable name to access its contents
// Indirect Access (Indirection) : using a pointer to access a variables contents

