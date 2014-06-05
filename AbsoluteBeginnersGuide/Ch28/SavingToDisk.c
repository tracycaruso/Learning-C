//  BasicProgram.c
//  Learning-C-Practice
//
//  Saving to Disk
//  Chapter 28 - Absolute Beginners Guide to C
//



#include "stdio.h"
#include "stdlib.h"

FILE *fptr;

int main (void){
    int age = 45;
    float salary = 9999.99;
    
    // Creates File
    fptr = fopen("/Users/LapTop/Git/Learning-C/AbsoluteBeginnersGuide/Ch28/mydata.dat" , "w");
    if (fptr == 0){
        printf("Error");
        exit(1);
    }
    
    // Adds Info to File
    fprintf(fptr, "Here is some stuff : \n");
    fprintf(fptr, "I am %d years old. \n" , age);
    fprintf(fptr, "I make %.2f dollars a year. \n" , salary);
    
    // Closes File
    fclose(fptr);
    return 0;
}



/***************************** VOCAB *******************************/

// "w" : write mode, creates new file whether it exists or not
// "r" : read mode, lets you read an existing file
// "a" : append mode, lets you add to a file or create a file if it doesnt exist