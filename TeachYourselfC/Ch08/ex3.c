//  Learning-C-Practice
//  Numeric Arrays
//  Chapter 8 Review - Teach Yourself C in 21 Days
//  Exercise 3

//  declare an array and initialize all of its elements to 88
#include <stdio.h>



int eightyeight[88], i;


int main(){
    
    for(i = 0; i < 88; i++){
        eightyeight[i] = 88;
    }
    
    for(i = 0; i < 88; i++){
        printf("#%d : %d\n", i+1, eightyeight[i]);
    }
    
}











/***************************** VOCAB *******************************/

// Array : collection of data storage locations, each storing the same type of data and having the same name
// Array Element : each storage location in an array
// Single Dimensional Array : an array with one subscript
// Subscript : the number that identifies the number of individual elements in an array, can be used to target specific elements
// Multidimensional Array : an array with more than one subscript