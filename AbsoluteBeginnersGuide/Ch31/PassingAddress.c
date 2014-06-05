//  BasicProgram.c
//  Learning-C-Practice
//  Agruments : Passing by Address
//  Chapter 31 - Absolute Beginners Guide to C
//


#include "stdio.h"
#include "string.h"

int change(char name[15]);

int main (void){
    
    char name[15] = "Chris Williams";
    change(name);
    printf("Back in main(), the name is now %s.\n", name);
    return 0;
}

// because you are passing the location of the char array(instead of the value) the value of the array will be changed in the main function
int change(char name[15]){
    strcpy(name, "xxxxxxxxxxxxxx");
    return 0;
}






/***************************** VOCAB *******************************/
// Passing a Adress : the memory address is passed

