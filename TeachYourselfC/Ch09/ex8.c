//  Learning-C-Practice
//  Pointers
//  Chapter 9 Review - Teach Yourself C in 21 Days
//  Exercise 8

//  Create 2 arrays and add there total values together

#include <stdio.h>

// define constants
#define MAX1 5
#define MAX2 8

// declare arrays of different lengths
int array1[MAX1] = { 1, 2, 3, 4, 5 };
int array2[MAX2] = {1, 2, 3, 4, 5, 6, 7, 8};
int total;

// function prototype, with 4 parameters
int sumarrays(int z1[], int len_x1, int x2[], int len_x2);

int main(void){
    
    // call the sumarrays function and pass it the 2 arrays and their length, store returned value in total variable
    total = sumarrays(array1, MAX1, array2, MAX2);
    
    // print total
    printf("The total is %d\n", total);
    
    return 0;
}

// function definition
int sumarrays(int x1[], int len_x1, int x2[], int len_x2){
    
    // declare variables
    int total = 0, count = 0;
    
    // loop through first array and add all numbers to total
    for(count = 0; count < len_x1; count++)
        total += x1[count];
    
    // loop through second array and add all numbers to total
    for(count = 0; count < len_x2; count++)
        total += x2[count];
    
    // return the total amount to the calling function
    return total;
}



















/***************************** VOCAB *******************************/

// Pointer : a variable that contains the address of another variable
// * Indirection Operator : used to declare pointers
// & Address of Operator : used to return the address of a variable
// Direct Access : using the variable name to access its contents
// Indirect Access (Indirection) : using a pointer to access a variables contents

