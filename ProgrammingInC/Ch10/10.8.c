//  Learning-C-Practice
//  Character Strings
//  Chapter 10.8





#include "stdio.h"
#include "stdbool.h"
#include "string.h"



bool alphabetic(const char c){
    
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        return true;
    }
    else{
        return false;
    }
    
}


void readLine(char buffer[]){
    
    int i = 0;
    char character;
    
    do
    {
        character = getchar ();
        buffer[i] = character;
        i++;
    }
    while(character != '\n');
    
    buffer[i - 1] = '\0';
    
    
}



int countWords(const char string[]){
    
    int i, wordCount = 0;
    bool lookingForWord = true;
    bool alphabetic(const char c);
    
    
    for( i = 0; string[i] != '\0'; i++){
        if(alphabetic(string[i])) {
            if(lookingForWord){
                wordCount++;
                lookingForWord = false;
            }
        }
        else{
            lookingForWord = true;
        }
    }
    
    return wordCount;
}


int main (void){
    char text[81];
    int totalWords = 0;
    int countWords(const char string[]);
    void readLine(char buffer[]);
    bool endOfText = false;
    
    printf("Type in you text.\n");
    printf("When you are done, press 'RETURN twice'.\n\n");
    
    while(! endOfText){
        
        readLine(text);
        
        if(text[0] == '\0')
            endOfText = true;
        else
            totalWords += countWords(text);
    }
    
    printf("\nThere are %i words in the text.\n", totalWords);
    
    return 0;
    
}



