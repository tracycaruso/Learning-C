//  Learning-C-Practice
//  Basic Program Control
//  Chapter 6 - Teach Yourself C in 21 Days
//
//  6.3

//  While Loop - Counts from 1 - 20

#include <stdio.h>

int count;

int main (void){
    count = 1;
    
    while(count <= 20){
        printf("%d\n", count);
        count++;
    }
    
    return 0;
}




/***************************** VOCAB *******************************/
// Array : indexed group od data storage locations that have the same name
// Subscript(index) : used to differentiate the different elements in an array

