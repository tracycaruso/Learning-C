//  Learning-C-Practice
//  Reading & Writing
//  Chapter 7 - Teach Yourself C in 21 Days
//  7.3
//

//  scanf() : Menu Section & Number Input


#include <stdio.h>

// declare constants
#define QUIT 4

// function prototype
int get_menu_choice(void);

int main (void){
    
    // variable declaration
    int choice = 0;
    int int_var = 0;
    float float_var = 0;
    unsigned unsigned_var = 0;
    
    // As long as the user doesnt select quit
    while(choice != QUIT){
        
        // call function and return value to choice
        choice = get_menu_choice();
        
        // compare choice to the next 3 options, and execute corresponding task
        if(choice == 1){
            puts("\Enter a signed decimal integer (i.e. -123)");
            scanf("%d", &int_var);
        }
        if(choice == 2){
            puts("\nEnter a decimal floating-point number (e.g. 1.23)");
            scanf("%f" , &float_var);
            
        }
        if(choice == 3){
            puts("\nEnter an unsigned decimal integer (e.g. 123)");
            scanf("%u", &unsigned_var);
        }
        
        
        
    }
    // When user exits return entered values
    printf("\nYour values are: int: %d float: %f unsigned: %u \n", int_var, float_var, unsigned_var);
    
    return 0;
    
}

// Print menu, make sure users choice is valid, store value in selection variable, return value to calling function
int get_menu_choice(void){
    int selection = 0;
    do{
        puts("\n1 - Get a signed decimal integer");
        puts("2 - Get a decimal floating-point number");
        puts("3 - Get an unsigned decimal integer");
        puts("4 - Quit");
        puts("\nEnter a seletion :");
        scanf("%d", &selection);
    }while (selection < 1 || selection > 4);
    
    return selection;
}

/***************************** VOCAB *******************************/
// Format String : the first argument in functions like printf(), they instruct the other arguments on what to do
// Newline Character : \n  creates a newline
// Escape Sequence : formatting control \n \t ...
// Conversion Specifier (Conversion Character) : tells functions how to interpret variables
// puts() : can display messages, but not numbers... uses less overhead than printf()
