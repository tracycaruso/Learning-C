/***************************** VOCAB *******************************/

//  BasicProgram.c
//  Learning-C-Practice
//
//  Arrays
//  Chapter 21 - Absolute Beginners Guide to C
//


/*
 
 int j[25]; // defines an array
 int vals[5] = {6, 10, 80, 54, 23}; // defines and initializes - numbers don't need space for null zero
 char grades [5] = {'a', 'b' , 'c', 'd', 'f'}; // difines and initializes character array - No null zero
 
 // String arrays need space for null zero
 char name[8] = "Florida"; //  defines and initializes string array - leave space for null zero
 char name2 [60] = " Ohio"; // defines and initializes string array - leaves room for the variable to change
 
 float amount[30] = {0.0}; // zeros out all emements in array
 
 */



#include "stdio.h"



int main (void){
    
    // initializes an array and then fills the array with with users info
    int ages[3], i;
    
    for( i = 0; i < 3; i++ ){
        printf("What is the age of child number %d? : " , i+1);
        scanf("%d" , &ages[i]);
    }
    
    for(i=0; i < 3; i++){
        printf("Child number %d is %d years old \n", i+1, ages[i]);
    }
    
    
    
}



/***************************** VOCAB *******************************/

// Elements : values held in arrays, must be of the same data type
