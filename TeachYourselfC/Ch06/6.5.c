//  Learning-C-Practice
//  Basic Program Control
//  Chapter 6 - Teach Yourself C in 21 Days
//
//  6.5

//  Menu Selection

#include <stdio.h>

int get_menu_choice(void);

int main (void){
    int choice;
    
    // call function and store returned value in choice
    choice = get_menu_choice();
    
    // tell user their selection
    printf("You chose Menu Option %d\n", choice);
    
    return 0;
    
}

// Function shows user menu choices, and prompts them for a response, then returns the response to the calling function
int get_menu_choice(void){
    int selection = 0;
    
    do{
        printf("\n");
        printf("\n1 - Add a Record");
        printf("\n2 - Change a Record");
        printf("\n3 - Delete a Record");
        printf("\n4 - Quit");
        printf("\n");
        printf("Enter a selection : ");
        
        scanf("%d", &selection );
        
    }
    while (selection < 1 || selection > 4);
    
    
    return selection;
}




/***************************** VOCAB *******************************/
// Array : indexed group od data storage locations that have the same name
// Subscript(index) : used to differentiate the different elements in an array

