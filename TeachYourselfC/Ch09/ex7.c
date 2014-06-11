//  Learning-C-Practice
//  Pointers
//  Chapter 9 Review - Teach Yourself C in 21 Days
//  Exercise 7

// Find the largest number using a line marker


#include <stdio.h>

#define MAXX 10

int arrayA[MAXX], arrayB[MAXX], a, total;

int sumArrays(int array1[], int array2[], int length1);

int main (void){
    
    for(a = 0; a < MAXX; a++){
        arrayA[a] = rand() % 100;
        arrayB[a] = rand() % 100;
    }
    
    printf("The total sum of all numbers is %d : ", sumArrays(arrayA, arrayB, MAXX));
    
}

int sumArrays(int array1[], int array2[], int length){
    int a, total;
    
    
    for( a = 0; a < length; a++){
        total += array1[a] + array2[a];
    }
    
    return total;
}


















/***************************** VOCAB *******************************/

// Pointer : a variable that contains the address of another variable
// * Indirection Operator : used to declare pointers
// & Address of Operator : used to return the address of a variable
// Direct Access : using the variable name to access its contents
// Indirect Access (Indirection) : using a pointer to access a variables contents

