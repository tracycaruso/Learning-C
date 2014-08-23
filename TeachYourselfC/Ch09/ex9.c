//  Learning-C-Practice
//  Pointers
//  Chapter 9 Review - Teach Yourself C in 21 Days
//  Exercise 9

//  Create 2 arrays and add each element of the array together and store sum in a third array


#include <stdio.h>

#define MAXX 10

int arrayA[MAXX], arrayB[MAXX], a, total;

void sumArrays(int array1[], int array2[], int length1);

int main (void){
    
    for(a = 0; a < MAXX; a++){
        arrayA[a] = rand() % 100;
        arrayB[a] = rand() % 100;
    }
    
    sumArrays(arrayA, arrayB, MAXX);
    
}

void sumArrays(int array1[], int array2[], int length){
    int a;
    
    int arrayC[10];
    
    for( a = 0; a < length; a++){
        arrayC[a] = array1[a] + array2[a];
    }
    
    
    
    
}


















/***************************** VOCAB *******************************/

// Pointer : a variable that contains the address of another variable
// * Indirection Operator : used to declare pointers
// & Address of Operator : used to return the address of a variable
// Direct Access : using the variable name to access its contents
// Indirect Access (Indirection) : using a pointer to access a variables contents

