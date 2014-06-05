/***************************** VOCAB *******************************/

//  BasicProgram.c
//  Learning-C-Practice
//
//  Character Strings 2
//
//  Chapter 19 - Absolute Beginners Guide to C
//



#include "string.h"
#include "stdio.h"
#include "ctype.h"




int main (void){
    
    char firstName[25], newName[25];
    char ans;
    int i;
    
    printf("What is your name? ");
    gets(firstName);
    printf("Are you sure that %s is your name (y/n)? ", firstName);
    ans = getchar();
    
    if(toupper(ans) == 'Y')
    {
        for (i=0; i <= strlen(firstName); i++)
            
        { newName[i] = toupper(firstName[i]); }
        
        printf("Ypur name in uppercase is %s.\n", newName);
        
    }
    
    
    return 0;
    
}



/***************************** VOCAB *******************************/




