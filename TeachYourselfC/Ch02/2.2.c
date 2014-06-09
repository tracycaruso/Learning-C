//  Learning-C-Practice
//  C Components
//  Chapter 2 - Teach Yourself C in 21 Days
//  2.2

//  This program displays a listing with line numbers
#include <stdio.h>
#include <stdlib.h>

void display_usage(void);
int line;

int main( int argc, char *argv[]){
    
    // Creates a character array with 256 locations
    char buffer[256];
    
    //  Tells the program ther is a file
    FILE *fp;
    
    // Not sure but I think this checks to see if changes have been made to the file
    if(argc < 2)
    {
        display_usage();
        return 1;
    }
    
    // Not sure but I think this checks to see if a file exists to be opened, and prints a error if it doesn't
    if (( fp = fopen( argv[1], "r" )) == NULL ){
        fprintf( stderr, "Error opening file, %s!", argv[1]);
        return(1);
    }
    
    line = 1;
    
    // Pushes program to the next line while the buffer is not empty
    while( fgets( buffer, 257, fp ) != NULL )
        fprintf(stdout, "%4d:\t%s", line++, buffer);
    
    
    // Closes file
    fclose(fp);
    return 0;
}

void display_usage(void){
    fprintf(stderr, "\nProper Usage is: ");
    fprintf(stderr, "\n\nlist_it filename.ext\n");
}



/***************************** VOCAB *******************************/
// Arguments : Information sent to a function
// User-Defined Functions : functions created by user
// Library Functions : functions that come with a compiler
// Include File (Header Files): separate file that can be used by compiler and program, can come with compiler or made by user
// #include : used to include or link header files to program
// Variable : name assigned to a location in memory to store information
// Function Prototype : provides the compiler with the name and agruments of a function
// Function Definition : statements that make up the function
// printf() : displays information on the screen
// scanf() : takes data from a user and assigns it to a variable
// Function : independent section of code used to perform a certain task
// Comment : used to increase the readability of a program
// Block : group of multiple C statements enclosed in curly braces


