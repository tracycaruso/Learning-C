//  Learning-C-Practice
//  Pointers
//  Chapter 9 Review - Teach Yourself C in 21 Days
//  9.2

// Prints the memory location for consecutive data within an various arrays

#include <stdio.h>

int ctr;
// declare arrays
short array_s[10];
float array_f[10];
double array_d[10];

int main(void){
    
    // print titles
    printf("\t\t\tShort\t\t\tFloat\t\t\tDouble");
    
    // print border
    printf("\n=======================================================");
    
    // loop through each array 10 times and return location of each array element
    for ( ctr = 0; ctr < 10; ctr++){
        printf("\nElement %d:\t%ld\t\t%ld\t\t%ld", ctr, &array_s[ctr], &array_f[ctr], &array_d[ctr]);
    }
    
    
    // print border
    printf("\n=======================================================\n");
    
    return 0;
    
}



/***************************** VOCAB *******************************/

// Pointer : a variable that contains the address of another variable
// * Indirection Operator : used to declare pointers
// & Address of Operator : used to return the address of a variable
// Direct Access : using the variable name to access its contents
// Indirect Access (Indirection) : using a pointer to access a variables contents

