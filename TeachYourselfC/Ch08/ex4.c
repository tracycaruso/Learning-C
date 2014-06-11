//  Learning-C-Practice
//  Numeric Arrays
//  Chapter 8 Review - Teach Yourself C in 21 Days
//  Exercise 4

//  intitialize a multidimensional array
#include <stdio.h>



int stuff[12][10];
int a, b;


int main(){
    
    for( a = 0; a < 12; a++){
        for( b = 0; b < 10; b++){
            stuff[a][b] = 0;
        }
    }
    
    for( a = 0; a < 12; a++){
        for( b = 0; b < 10; b++){
            printf("stuff[%d][%d] : ", a, b);
            printf("%d\n" , stuff[a][b]);
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

