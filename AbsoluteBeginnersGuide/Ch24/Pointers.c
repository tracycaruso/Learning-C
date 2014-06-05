//  BasicProgram.c
//  Learning-C-Practice
//
//  Pointers
//  Chapter 24 - Absolute Beginners Guide to C
//



#include "stdio.h"




int main (void){
    
    int num = 10;
    int * pNum;
    pNum = &num;
    
    // Prints the value of num
    printf("The value of num is %d\n" , num);
    // Prints the memory location of num
    printf("The value of pNum is %d, this is the memory location of num\n" , pNum);
    printf("The data that is at pNum location is %d\n" , *pNum);
    
    num++;
    pNum = &num;
    
    // Prints the new value of num
    printf("The value of num is %d\n" , num);
    // The memory location still stays the same even after the variable changes
    printf("The value of pNum is %d, this is the memory location of num\n" , pNum);
    
    // *pNum lists the value that is stored where it is pointing
    printf("The data that is at pNum location is %d\n" , *pNum);
    
    
    
    
    
    
    return 0;
    
    
}



/***************************** VOCAB *******************************/

// Pointer Variables (Pointers) : hold addresses of other variables
// & : Address of Operator
// * : Dereferencing operator