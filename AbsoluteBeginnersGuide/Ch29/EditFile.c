//  BasicProgram.c
//  Learning-C-Practice
//  Editing Files
//  Chapter 29 - Absolute Beginners Guide to C
//



#include "stdio.h"
#include "stdlib.h"


FILE *fptr;

int main (void){
    
    char letter;
    int i;
    
    // creates and opens a new file
    fptr = fopen("/Users/LapTop/Git/Learning-C/AbsoluteBeginnersGuide/Ch29/mydata.dat", "r+");
    
    // if file is empty send error to screen
    if (fptr == 0){
        printf("Error...\n");
        // closes file
    }
    // Takes number from user
    printf("What is the position you want to change? ");
    scanf( " %d" , &i);
    
    // Takes users number and subtracts one, starts from beginning, then goes to that place in file
    fseek(fptr, (i - 1), SEEK_SET);
    
    // Replaces current character with *
    fputc('*', fptr);
    
    // Moves to beginning of file
    fseek(fptr, 0, SEEK_SET);
    
    // Prints to screen
    printf("Here is the file now:\n");
    
    // Loops through file content
    for(i=0; i < 26; i++){
        letter = fgetc(fptr);
        printf("The next letter is %c\n", letter);
    }
    
    // Closes File
    fclose(fptr);
    
    return 0;
    
    
    
    
}



