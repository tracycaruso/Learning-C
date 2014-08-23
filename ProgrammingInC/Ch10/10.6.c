//  Learning-C-Practice
//  Character Strings
//  Chapter 10.6
//  store user input


#include "stdio.h"

int main(void){
    
    void readLine(char buffer[]);
    char string1[81];
    char string2[81];
    char string3[81];
    
    
    readLine(string1);
    readLine(string2);
    readLine(string3);
    
    printf("%s\n", string1);
    printf("%s\n", string2);
    printf("%s\n", string3);
    
    return 0;
    
    
    
}


void readLine(char buffer[]){
    
    printf("Type a line : ");
    
    char character;
    int i = 0;
    
    do{
        character = getchar();
        buffer[i] = character;
        i++;
    }
    while(character != '\n');
    
    buffer[i - 1] = '\0';
    
}