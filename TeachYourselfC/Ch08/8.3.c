//  Learning-C-Practice
//  Numeric Arrays
//  Chapter 8 Review - Teach Yourself C in 21 Days
//  8.3

//  Multidimensional Array

#include <stdio.h>
#include <stdlib.h>

// declare multidimensional array that holds 1000 elements
int random_array[10][10][10];

// declare variables to use as counters for each subscript of the array
int a, b, c;


int main(void){
    
    // Repeat whatever is in side this loop 10 separate times
    for(a = 0; a< 10; a++){
        
        // Repeat whatever is in side this loop 10 times everytime the preceding loop executes
        for(b = 0; b < 10; b++){
            
            // Repeat whatever is in side this loop 10 times everytime the preceding loop executes
            for(c = 0; c < 10; c++){
                
                // use current subscript and fill with a random number
                random_array[a][b][c] = rand();
            }
        }
    }
    
    // Repeat whatever is in side this loop 10 separate times
    for ( a = 0; a < 10; a++){
        
        // Repeat whatever is in side this loop 10 times everytime the preceding loop executes
        for( b = 0; b < 10; b++){
            
            // Repeat whatever is in side this loop 10 times everytime the preceding loop executes
            for( c = 0; c < 10; c++){
                
                // Print the number of the current subscript
                printf("\nrandom_array[%d][%d][%d] = ", a, b, c);
                
                // Print the value of the current subscript
                printf("%d", random_array[a][b][c]);
            }
            
            // Prompt user for response before returning to starting loop
            printf("\n Press Enter to continue, CTRL-C to quit.");
            
            // hold return character
            getchar();
        }
    }
    
    
    return 0;
    
    
    
}












/***************************** VOCAB *******************************/

// Array : collection of data storage locations, each storing the same type of data and having the same name
// Array Element : each storage location in an array
// Single Dimensional Array : an array with one subscript
// Subscript : the number that identifies the number of individual elements in an array, can be used to target specific elements
// Multidimensional Array : an array with more than one subscript
