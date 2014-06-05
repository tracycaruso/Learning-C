//  BasicProgram.c
//  Learning-C-Practice
//
//  Characters Mapping
//
//  Chapter 19 - Absolute Beginners Guide to C
//


// When working with charcter functions always include the ctype.h header
#include "ctype.h"
#include "stdio.h"



int main (void){
    
    char inpt2;

     printf("Do you like coding? : Y or N : \n");
     
     inpt2 = getchar();
     
     
     // Changes answer to upper case in order to compair to Y
     if(toupper(inpt2) == 'Y')
     {
     printf("yes\n");
     }
     else
     {
     printf("no\n");
     }
     
     
     
     return 0;
     
}



/***************************** VOCAB *******************************/


// Character Mapping Functions : modify arguments
// toupper() : capitalizes arguments
// tolower() : changes argument to lowercase

