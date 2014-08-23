//  Learning-C-Practice
//  Character Strings
//  Chapter 10.4
//  Comparing 2 Strings


#include "stdio.h"
#include "stdbool.h"

int main (void){
    
    bool areEqual(char str1[], char str2[]);
    
    char string1[] = "Equal";
    char string2[] = "Equal";
    char string3[] = "Not Equal";
    
    
    printf("%i, %i\n", areEqual(string1, string2), areEqual(string2, string3));
    
}


// compare 2 strings

bool areEqual(char str1[], char str2[]){
    
    int i = 0;
    bool equal;
    
    // while both characters of the strings are the same
    // and neither character is \0
    // keep looping
    while(str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0'){
        i++;
    }
    // after looping through.. if both characters are '\0' then strings are equal
    if(str1[i] == '\0' && str2[i] == '\0'){
        equal = true;
    }
    
    // if one or more of the prior conditions where not true
    // strings are not equal
    else{
        equal = false;
    }
    
    return equal;
    
}





