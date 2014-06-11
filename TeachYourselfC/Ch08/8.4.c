//  Learning-C-Practice
//  Numeric Arrays
//  Chapter 8 Review - Teach Yourself C in 21 Days
//  8.4

//  Compare the size of data types and arrays
#include <stdio.h>

int intarray[100];
float floatarray[100];
double doublearray[100];

int main(){
    
    // Print the size of various data types
    printf("\nSize of int = %lu bytes", sizeof(int));
    printf("\nSize of short = %lu bytes", sizeof(short));
    printf("\nSize of long = %lu bytes", sizeof(long));
    printf("\nSize of long long = %lu bytes", sizeof(long long));
    printf("\nSize of float = %lu bytes", sizeof(float));
    printf("\nSize of double = %lu bytes", sizeof(double));
    
    
    // Print the size of arrays that carry different data types
    printf("\nSize of intarray = %lu bytes", sizeof(intarray));
    printf("\nSize of floatarray = %lu bytes", sizeof(floatarray));
    printf("\nSize of doublearray = %lu bytes", sizeof(doublearray));
    
    return 0;
    
}











/***************************** VOCAB *******************************/

// Array : collection of data storage locations, each storing the same type of data and having the same name
// Array Element : each storage location in an array
// Single Dimensional Array : an array with one subscript
// Subscript : the number that identifies the number of individual elements in an array, can be used to target specific elements
// Multidimensional Array : an array with more than one subscript
