//  BasicProgram.c
//  Learning-C-Practice
//
//  Array of Pointers
//  Chapter 25 - Absolute Beginners Guide to C
//



#include "stdio.h"




int main (void){
    
    int i;
    // declares and initializes an array of pointers to characters
    char * pNames[5] = {"Bob", "Sue", "Patty", "Fred", "George"};
    
    for(i =0; i < 5; i++){
        
        // names[i] points to the first character then the string character conversion operator prints the data up to
        // the null zero
        printf("Name %d : %s \n" , i , pNames[i]);
        printf("Location %d : %d \n" , i , *pNames[i]);
        
    }
    
    
    
    return 0;
}



/***************************** VOCAB *******************************/
