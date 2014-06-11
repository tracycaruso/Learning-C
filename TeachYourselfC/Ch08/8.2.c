//  Learning-C-Practice
//  Numeric Arrays
//  Chapter 8 Review - Teach Yourself C in 21 Days
//  8.2

// Average Grades

#include <stdio.h>

#define MAX_GRADE 100
#define STUDENTS 10

int grades[STUDENTS];

int idx;
int total = 0;

int main (void){
    // Loop through total students
    for(idx=0; idx < STUDENTS; idx++){
        // Prompt user for grade
        printf("Enter Person %d's grade: ", idx + 1);
        // Store grade within array element
        scanf("%d", &grades[idx]);
        
        // If user enters a grade higher than 100 send warning and prompt user for new grade
        while(grades[idx] > MAX_GRADE){
            printf("\nThe highest grade possible is %d", MAX_GRADE);
            printf("\nEnter correct grade: ");
            // Store correct grade in array element
            scanf("%d", &grades[idx]);
        }
        // add each grade to total
        total += grades[idx];
    }
    // divide total by students and display average
    printf("\n\nThe average score is %d\n", (total / STUDENTS));
    
    return (0);
}

/***************************** VOCAB *******************************/

// Array : collection of data storage locations, each storing the same type of data and having the same name
// Array Element : each storage location in an array
// Single Dimensional Array : an array with one subscript
// Subscript : the number that identifies the number of individual elements in an array, can be used to target specific elements
// Multidimensional Array : an array with more than one subscript
