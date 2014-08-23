//  Recursive Character
#include "stdio.h"
#include "string.h"


int main (void){
    
    void returnChar(char usCh[]);
    char userChar[100];
    
    returnChar(userChar);
    
    printf("%s\n", userChar);
    
}

void returnChar(char usCh[]){
    char character;
    int i = 0;
    
    
    // prompt user for char
    printf("Please enter 1 character : ");
    
    // get character from screen and store in array until the \n is entered
    do{
        character = getchar();
        usCh[i] = character;
        i++;
        
    }while(character != '\n');
    
    usCh[i] = '\0';
    
    
    
    //if array is longer than 1 reprompt user for char
    while(strlen(usCh) > 2){
        returnChar(usCh);
    }
    
    
}
