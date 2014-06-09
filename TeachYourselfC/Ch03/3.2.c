//  Learning-C-Practice
//  Variables and Constants
//  Chapter 3 - Teach Yourself C in 21 Days
//  3.2

// Converts Weight in LBs to Grams, Calculates users age in 2020

#include <stdio.h>


#define GRAMS_PER_POUND 454
const int TARGET_YEAR = 2020;
long weight_in_grams, weight_in_pounds;
int year_of_birth, age_in_2020;

int main(void){
    
    printf("Enter your weight in pounds: ");
    scanf("%ld", &weight_in_pounds);
    
    printf("Enter  year of birth: ");
    scanf("%d", &year_of_birth);
    
    weight_in_grams = weight_in_pounds * GRAMS_PER_POUND;
    age_in_2020 = TARGET_YEAR - year_of_birth;
    
    
    printf("\nYour weight in grams = %ld", weight_in_grams);
    printf("\nIn 2020 you will be %d years old\n", age_in_2020);
    
    return 0;
    
}



/***************************** VOCAB *******************************/

// typedef: used to create a new name for an existing data type
// Initializing Variables : assign a value to a variable
// Constant : unchangable data
// Literal Constant : data typed directly into source code
// Symbolic Constant : constant that is represented by a name
// #define : used to create a symbolic constant -  #define CONSTNAME literal
// const : another way to create a symbolic constant -  const datatype CONSTNAME;


