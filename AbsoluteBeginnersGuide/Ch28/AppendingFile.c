//  BasicProgram.c
//  Learning-C-Practice
//  Reading File
//  Chapter 28 - Absolute Beginners Guide to C
//



#include "stdio.h"


FILE *fptr;

int main (void){
    
    
    fptr = fopen("/Users/LapTop/Git/Learning-C/AbsoluteBeginnersGuide/Ch28/mydata.dat", "a");
    if (fptr == 0){
        printf("Error");
        exit(1);
    }
    fprintf(fptr, "\nThat's all!\n");
    fclose(fptr);
    
    
    
    return 0;
    
    
    
    
}



/***************************** VOCAB *******************************/

// feof : end of file
// fgets : used with files
