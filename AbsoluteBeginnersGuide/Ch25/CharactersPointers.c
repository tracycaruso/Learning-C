//  BasicProgram.c
//  Learning-C-Practice
//
//  Characters and Pointers
//  Chapter 25 - Absolute Beginners Guide to C
//



#include "stdio.h"




int main (void){
    
    // declaring a pointer variable
    // character pointer points to the first character in the string, the %s function will work with characters too
    // so the point points at the first character and the %s tells it to get everything up to the null zero
    // this way we can declare strings and use the assignment operator later to change the value
    // pointer location varies too
    
    char name[100];
    char * pName = name;
    
    pName = "Tracy Caruso";
    
    printf(" %s\n" , pName);
    printf(" %d\n" , *pName);
    
    pName = "Bill Clinton";
    
    printf(" %s\n" , pName);
    printf(" %d\n" , *pName);
    
    pName = "Hillary Clinton";
    
    printf(" %s\n" , pName);
    printf(" %d\n" , *pName);
    
    
    
    
}



/***************************** VOCAB *******************************/
