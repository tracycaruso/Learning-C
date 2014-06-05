//  BasicProgram.c
//  Learning-C-Practice
//  Reading File
//  Chapter 28 - Absolute Beginners Guide to C
//



#include "stdio.h"


FILE *fptr;

int main (void){
    
    char fileLine[81];
    // opens file for reading
    fptr = fopen("/Users/LapTop/Git/Learning-C/AbsoluteBeginnersGuide/Ch28/mydata.dat", "r");
    // checks to see if file is not empty
    if (fptr != 0){
        // while its not the end of the file
        while(!feof(fptr)){
            // gets no more than 81 characters worth of information
            fgets(fileLine, 81, fptr);
            // puts the 81 characters down
            if(!feof(fptr)){
                puts(fileLine);
            }
        }
        
    }
    // If file is empty return error
    else{
        printf("Error\n");
    }
    
    fclose(fptr);
    return 0;
    
    
    
    
}



/***************************** VOCAB *******************************/

// "w" : write mode, creates new file whether it exists or not
// "r" : read mode, lets you read an existing file
// "a" : append mode, lets you add to a file or create a file if it doesnt exist