//  Learning-C-Practice
//  Numeric Arrays
//  Chapter 8 Review - Teach Yourself C in 21 Days
//  Exercise 7

//  Create a Multidimensional Array that contains random numbers
#include <stdio.h>

int array[4][5];
int a, b;

int main (void){
    
    for(a = 0; a < 4; a++){
        for(b = 0; b < 5; b++){
            array[a][b] = rand();
        }
        
    }
    
    for(a = 0; a < 4; a++){
        for(b = 0; b < 5; b++){
            printf("array[%d][%d]: ", a, b);
            printf("%d\n" , array[a][b]);
        }
        
    }
    return 0;
    
}










/***************************** VOCAB *******************************/

// Array : collection of data storage locations, each storing the same type of data and having the same name
// Array Element : each storage location in an array
// Single Dimensional Array : an array with one subscript
// Subscript : the number that identifies the number of individual elements in an array, can be used to target specific elements
// Multidimensional Array : an array with more than one subscript

