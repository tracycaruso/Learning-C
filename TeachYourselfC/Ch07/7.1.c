//  Learning-C-Practice
//  Reading & Writing
//  Chapter 7 - Teach Yourself C in 21 Days
//  7.1
//

//  Escape Sequences
//  Program : prints menu, prompts user for selection, executes task dependent on selection, continues until user exits

#include <stdio.h>

#define QUIT 3

int get_menu_choice(void);
void print_report(void);

int main (void){
    
    
    // Checks users input and exectutes task based on selection
    int choice = 0;
    
    // As long as user hasnt quit
    while (choice != QUIT)
    {
        // Prints menu, prompts user for selection
        choice = get_menu_choice();
        
        if (choice == 1)
            printf("\nBeeping the computer \a\a\a");
        else{
            if (choice == 2)
                print_report();
        }
    }
    printf("You chose to quit!\n");
    
    return 0;
    
    
}

// Function to print menu
int get_menu_choice(void){
    int selection = 0;
    
    do{
        printf("\n");
        
        printf("\n1 - Beep Computer");
        
        printf("\n2 - Display Report");
        
        printf("\n3 - Quit");
        
        printf("\n");
        
        printf("\nEnter a selection: " );
        
        scanf(" %d", &selection);
        
    }while ( selection < 1 || selection > 3);
    
    return selection;
}

// funtion to print result
void print_report(void){
    printf("\nSAMPLE REPORT" );
    printf("\n\nSequence\tMeaning");
    printf("\n=========\t=========");
    printf("\n\\a\t\tbell (alert)");
    printf("\n\\b\t\tbackspace");
    printf("\n...\t\t...");
}




/***************************** VOCAB *******************************/
// Format String : the first argument in functions like printf(), they instruct the other arguments on what to do
// Newline Character : \n  creates a newline
// Escape Sequence : formatting control \n \t ...
// Conversion Specifier (Conversion Character) : tells functions how to interpret variables
