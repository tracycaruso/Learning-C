//  Learning-C-Practice
//  Numeric Arrays
//  Chapter 8 Review - Teach Yourself C in 21 Days
//  8.1



#include <stdio.h>

// declare array
float expenses[13];

// declare variables
int count;
float total;



int main(void){
    
    // Loop through 12 times
    for (count = 1; count < 13; count ++){
        // Store each months expenses in an element of the array
        printf("Enter expenses for month %d: ", count);
        scanf("%f", &expenses[count]);
    }
    
    // print each months expenses
    for(count = 1; count < 13; count++){
        printf("Month %d = $%.2f\n", count, expenses[count]);
        // Add months total
        total += expenses[count];
        
    }
    // Print total
    printf("The total for all months is $%.2f\n", total);
    
    
    return 0;
}



/***************************** VOCAB *******************************/

// Array : collection of data storage locations, each storing the same type of data and having the same name
// Array Element : each storage location in an array
// Single Dimensional Array : an array with one subscript
// Subscript : the number that identifies the number of individual elements in an array, can be used to target specific elements
