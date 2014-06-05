//  BasicProgram.c
//  Learning-C-Practice
//
//  Pointers 2
//  Chapter 24 - Absolute Beginners Guide to C
//



#include "stdio.h"




int main (void){
    
    char initial = 'G';
    char * pInitial;
    float score = 97.4;
    float * pScore;
    pInitial = & initial;
    pScore = &score;
    
    // Prints the initial variable
    printf("The initial is %c.\n", initial);
    
    // Prints the contents of the initial variable
    printf("The initial is %c.\n", *pInitial);
    
    // Prints the location of the initial variable
    printf("The initial is stored at %d.\n", pInitial);
    
    
    
    // Prints the score variable
    printf("The initial is %.1f\n", score);
    
    // Prints the contents of the score variable
    printf("The initial is %.1f\n", *pScore);
    
    // Prints the location of the score variable
    printf("The score is stored at %d.\n", pScore);
    
    
    
    return 0;
    
    
}



/***************************** VOCAB *******************************/

// Pointer Variables (Pointers) : hold addresses of other variables
// & : Address of Operator
// * : Dereferencing operator