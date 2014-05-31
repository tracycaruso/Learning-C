//  BasicProgram.c
//  Learning-C-Practice
//
//  Logical Operators
//
//  Chapter 12 - Absolute Beginners Guide to C
//


#include <stdio.h>

int main (void)
{
    int numAct, numSports;
    float grade;
    
    printf("What grade did you get this year? ");
    scanf("%f" , &grade);
    
    printf("How many sports did you participate in? ");
    scanf(" %d" , &numSports);
    
    printf("How many activities did you partcipate in? ");
    scanf(" %d" , &numAct);
    
    // Checks to see if the student recieved a grade equal to or greater than 90
    // Checks to see if student played at least 2 sports or was in 3 activities
    // Both sets of conditions must be true to evaluate to true
    // Otherwise the program executes the else block
    
    if((grade >= 90) && ((numSports <= 2) || (numAct <= 3))){
        printf("You can be part of the honors society! \n");
    }
    else{
        printf("You can always try again next year! ");
    }
    
    
    return 0;
    
}



/***************************** VOCAB *******************************/

// Logical Operator or Compound Relational Operators : Help test multiple conditions at once && || !