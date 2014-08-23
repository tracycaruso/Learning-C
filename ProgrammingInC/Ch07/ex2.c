//  Learning-C-Practice
//  Working with Arrays
//  Chapter 7
//  ex 2
//  Arrays


//  Displays the various ways to assign values to array subscripts

#include <stdio.h>

int main (void){
    int values[10];
    int index;
    
    
    
    for(index = 0; index < 10; ++index){
        values[index] = 0;
        printf("values[%i] = %i\n", index, values[index]);
        
        
    }
    
    return 0;
}