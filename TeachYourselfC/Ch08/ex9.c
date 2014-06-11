//  Learning-C-Practice
//  Numeric Arrays
//  Chapter 8 Review - Teach Yourself C in 21 Days
//  Exercise 9

//  Create an Array with 10 elements and initialize all of it's elements to be equal to its subscript
#include <stdio.h>

int array[10];
int a;

int main(void){
    for(a = 1; a < 11; a++){
        array[a]= a;
    }
    
    for(a = 1; a < 11; a++){
        printf("array[%d] : ", a);
        printf("%d\n", array[a]);
    }
    return 0;
}






/***************************** VOCAB *******************************/

// Array : collection of data storage locations, each storing the same type of data and having the same name
// Array Element : each storage location in an array
// Single Dimensional Array : an array with one subscript
// Subscript : the number that identifies the number of individual elements in an array, can be used to target specific elements
// Multidimensional Array : an array with more than one subscript

