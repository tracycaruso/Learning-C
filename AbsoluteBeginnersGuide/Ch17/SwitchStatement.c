//  BasicProgram.c
//  Learning-C-Practice
//
//  Switch Statement
//
//  Chapter 17 - Absolute Beginners Guide to C
//


#include <stdio.h>

int main (void)
{
    char animal;
    
    do
        
    {
        printf("Do you like cats or dogs better? Choose d for dog or c for cats or n for neither : ");
        scanf(" %c", &animal);
        switch (animal)
        
        {
                // if user selects d print message and end loop
                case ('d') : printf("Oh I love dogs too!\n");
                break;
                
                // if user selects c print message and end loop
                case ('c') : printf("Oh I love cats too!\n");
                break;
                
                // if user selects n print message and end loop
                case ('n') : printf("You must be sad inside.\n");
                break;
                
                // if user selects none of the available options print message and end loop
                default    : printf("I don't know the option %c please try again.\n\n" , animal);
                break;
        }
        
        // if the user didn't select an available option re-loop until they do
    }   while ((animal != 'c') && (animal != 'd') && (animal != 'n'));
    
    return 0;
}



/***************************** VOCAB *******************************/

// Switch Statement : Checks whether multiple conditions are true