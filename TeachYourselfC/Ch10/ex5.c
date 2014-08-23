//  Learning-C-Practice
//  Characters & Strings
//  Chapter 10 Review - Teach Yourself C in 21 Days
//  Ex 5


#include <stdio.h>

#define SIZE 10

void copyArr(int arrayA[], int arrayB[]);

int array1[SIZE] = {1,2,3,4,5,6,7,8,9};
int array2[SIZE] = {9,8,7,6,5,4,3,2,1};

int i;

int main (void){
    
    copyArr(array1, array2);
    
    
    return 0;
    
}

void copyArr(int arrayA[], int arrayB[]){
    
    int i;
    
    for( i = 0; i < SIZE; i++){
        
        printf("Before : B = %d,  A = %d\n", arrayB[i], arrayA[i]);
        
        arrayB[i] = arrayA[i];
        
        printf("After  : B = %d,  A = %d\n", arrayB[i], arrayA[i]);
        
    }
    
    
}








/***************************** VOCAB *******************************/
// Character : Single Letter, Numeral, Puncutation Mark or other Symbol
// String : andy sequence of charcters
// ASCII character set : 0 - 255 code values that represent letters, digits, punctuation, and other symbols
// Dynamic Allocation : allocate space to a program while the program is executing
// malloc() : memory allocation function