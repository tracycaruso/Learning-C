//  Learning-C-Practice
//  Numeric Arrays
//  Chapter 8 Review - Teach Yourself C in 21 Days
//  Exercise 8

//  Create a single dimensional array with 1000 variables and average them, print numbers 10 at a time
#include <stdio.h>

int array[1000];
long a, total;

int main(void){
    
    for(a=0; a < 1000; a++){
        array[a] = rand();
        total += array[a];
    }
    
    total /= a;
    printf("The average of all numbers is: %ld\n", total);
    
    for(a = 0; a < 1000; a++){
        printf("#%ld : %d\n" ,a,  array[a]);
        if(a % 10 == 0 && a > 0){
            printf("Press CTRL-C to Exit, or ENTER to continue");
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

