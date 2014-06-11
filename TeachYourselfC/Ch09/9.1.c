//  Learning-C-Practice
//  Pointers
//  Chapter 9 Review - Teach Yourself C in 21 Days
//  9.1

// Demonstrates the difference between direct and indirect accesss


#include <stdio.h>
// declare a variable
int var = 1;

// declare a pointer
int *ptr;

int main(void){
    
    // assign the variable vars address to ptr
    ptr = &var;
    
    // use direct access to access var
    printf("\nDirect access, var = %d", var);
    
    // use indirect access to access var via the *ptr pointer
    printf("\nIndirect access, var = %d", *ptr);
    
    
    // access var's address using the address of operator
    printf("\n\nThe address of var = %d", &var);
    
    // access var's address using a pointer
    printf("\nThe address of var = %d\n", ptr);
    
    return 0;
}






/***************************** VOCAB *******************************/

// Pointer : a variable that contains the address of another variable
// * Indirection Operator : used to declare pointers
// & Address of Operator : used to return the address of a variable
// Direct Access : using the variable name to access its contents
// Indirect Access (Indirection) : using a pointer to access a variables contents

