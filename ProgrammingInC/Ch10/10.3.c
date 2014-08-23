//  Learning-C-Practice
//  Character Strings
//  Chapter 10.3
//  Concatenating Character Strings


#include "stdio.h"


int main(void){
    
    void concat(char result[], const char st1[], const char st2[]);
    const char string1[] = "This is my first String. ";
    const char string2[] = "This is my second String. ";
    char string3[100];
    
    
    concat(string3, string1, string2);
    
    printf("%i", string3);
    
    printf("\n");
    
}

void concat(char result[], const char st1[], const char st2[]){
    
    int i, j;
    for(i = 0; st1[i] != '\0'; i++){
        result[i] = st1[i];
    }
    
    for(j = 0; st2[j] != '\0'; j++){
        result[i + j] = st2[j];
    }
    
    result[i + j] = '\0';
    
    
    
}