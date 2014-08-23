//  Learning-C-Practice
//  Characters & Strings
//  Chapter 10 Review - Teach Yourself C in 21 Days
//  Ex 6


#include <stdio.h>
#include <string.h>

// function prototype
char * compare_strings(char *, char *);

int main(void){
    
    // declare pointers to strings
    char *a = "Hello";
    char *b = "World!";
    
    // declar empty pointer
    char *longer;
    
    // assign the result of compare_string to longer
    longer = compare_strings(a, b);
    
    // print the longer string
    printf("The longer string is : %s\n", longer);
    
    return 0;
}

// compare_strings returns a pointer value, and takes two pointer parameters
char * compare_strings(char * first, char * second){
    
    // declare variables for comparison
    int x, y;
    
    // assign the length of each string to the comparison variables
    x = strlen(first);
    y = strlen(second);
    
    // compare the size of each variable and return correct value to the calling function
    if (x > y){
        return(first);}
    else{
        return(second);}
}







/***************************** VOCAB *******************************/
// Character : Single Letter, Numeral, Puncutation Mark or other Symbol
// String : andy sequence of charcters
// ASCII character set : 0 - 255 code values that represent letters, digits, punctuation, and other symbols
// Dynamic Allocation : allocate space to a program while the program is executing
// malloc() : memory allocation function