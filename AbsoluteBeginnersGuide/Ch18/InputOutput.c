//  BasicProgram.c
//  Learning-C-Practice
//
//  Input Output Functions
//
//  Chapter 18 - Absolute Beginners Guide to C
//




// Use because of string length function
#include <string.h>

#include <stdio.h>

int main (void)
{
    /**** Prints message one character at a time ****/
    
    int i;
    char msg[] = "This is my message!";
    
    // compairs i to the length of the msg array
    // cycles through until i matches string length
    for (i = 0; i < strlen(msg); i++)
    {
        
        // uses the value of i to print the element at the current subscript position
        putchar(msg[i]);
    }
    
    // ends line when the loop completes
    putchar('\n');
    
    
    /**** Collects characters from users and stores them in the msg2 character array ****/
    
    int y;
    int msg2[25]; // assign 25 characters to msg2
    
    printf("Type up to 25 characters then press Enter...\n");
    
    // uses y to cycle through loop 25 times
    for (y = 0; y < 25; y++)
        
        // stores the next avaiable character in the current array element
    { msg2[i] = getchar();
        
        // checks to see if the current array character has been set to \n. If it is the loop breaks to the end
        if(msg2[i] == '\n'){
            break;
        }
    }
    putchar('\n');
    
    
    
    return 0;
}



/***************************** VOCAB *******************************/

// getchar() : Gets one character from the user at a time : buffered

// putchar() : Outputs one character at a time to the console

// getch() : similar to getchar except it elimates issues with return character. However since it is unbuffered,
// users can not use the backspace key to change any mistakes made
// must be used with putch if you want the charactes echoed to the screen