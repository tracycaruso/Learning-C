//  BasicProgram.c
//  Learning-C-Practice
//  Random Files
//  Chapter 29 - Absolute Beginners Guide to C
//



#include "stdio.h"
#include "stdlib.h"


FILE *fptr;

int main (void){
    
    char letter;
    int i;
    
    // creates and opens a new file
    fptr = fopen("/Users/LapTop/Git/Learning-C/AbsoluteBeginnersGuide/Ch29/mydata.dat", "w+");
    
    // if file is empty send error to screen
    if (fptr == 0){
        printf("Error...\n");
        exit(1);}
    
    // adds letters A - Z to the file
    for(letter = 'A'; letter <= 'Z'; letter++){
        fputc(letter, fptr);
    }
    
    // tells user letters have been added to file
    puts("Just wrote the letters A through Z");
    
    // goes to end of file minus one byte
    fseek(fptr, -1, SEEK_END);
    printf("Here is the file backwards: \n");
    
    // loops through letters
    for(i=26; i > 0; i--)
    {
        // sets letter equal to current spot in
        letter = fgetc(fptr);
        // moves back 2 bytes from current position
        fseek(fptr, -2, SEEK_CUR);
        printf("The next letter is %c \n" , letter);
    }
    
    // closes file
    fclose(fptr);
    
    return 0;
    
    
    
    
}



/***************************** VOCAB *******************************/

// "r+" : Opens an existing file for reading and writing
// "w+" : Opens a new file fore for reading and writing
// "a+" : Opens a file in append mode, lets you move back through the file, reading and writing as you go
// fseek() : moves the file pointer around the file / fseek(filePtr, longVal, origin);
// filePtr : value of file
// longVal : long int variable or literal that can be positive or negative / number of bytes to skip forward or backward
// origin : tells fseek where to start

/* Origin Values */
// SEEK_SET : beginning of file
// SEEK_CUR : current position in file
// SEEK_END : end of file


