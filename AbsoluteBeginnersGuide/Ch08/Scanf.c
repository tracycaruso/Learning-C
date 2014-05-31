//  BasicProgram.c
//  Learning-C-Practice
//
//  scanf() library function
//  scanf("controlString [, data]);
//
//  Chapter 8 - Absolute Beginners Guide to C
//

    // scanf() : gathers data from the user/keyboard (uses stdio.h)
    // generally is used along side printf()
    // must use 2 separate functions if you need data for more than one word, as scanf() stops reading input after the first space


#include <stdio.h>

int main (void)
{
    int age;
    char name[30]; // Leave enough room for long names
    
    
    
    
    printf("How old are you? "); // Prompts user for age
    scanf("%d" , &age); // Stores response in age variable | use & if data type is not used in a character array
    
    
    
    printf("What is your name? "); // Prompts user for name
    scanf("%s", name); // Stores response in name variable | doesnt use & because it is a character array
    
    
    printf("Wow %s, %d is old! \n" , name, age); // Returns value to user
    
    return 0;
    
}



/***************************** VOCAB *******************************/




