//  Learning-C-Practice
//  Basic Program Control
//  Chapter 6 - Teach Yourself C in 21 Days
//
//  6.2

//  Nesting For Statements

#include <stdio.h>


void drawBox(int a, int b);


int main (void){
    
    drawBox(5 , 5);
    
    return 0;
}

void drawBox(int a, int b){
    int i, x;
    for(i = 0; i < a; i++){
        for(x = 0; x < b; x++){
            printf("X");
        }
        printf("\n");
    }
    
    
}




/***************************** VOCAB *******************************/
// Array : indexed group od data storage locations that have the same name
// Subscript(index) : used to differentiate the different elements in an array

