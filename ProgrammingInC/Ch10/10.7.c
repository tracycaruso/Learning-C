//  Learning-C-Practice
//  Character Strings
//  Chapter 10.7
//  Counting Words

#include "stdio.h"
#include "stdbool.h"

int main(void){
    
    int countingWords(char str[]);
    char string[] = "I am a string of letters and words";
    printf("%i\n", countingWords(string));
    
}

int countingWords(char str[]){
    
    bool alphbetical(char c);
    bool lookingForWord = true;
    int wordCount = 0;
    
    for(int i = 0; str[i] != '\0'; i++){
        if(alphbetical(str[i])){
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




bool alphbetical(char c){
    
    bool alpha = true;
    
    
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        
        alpha = true;
        
    }
    else{
        
        alpha = false;
        
    }
    return alpha;
}

