//  Learning-C-Practice
//  Character Strings
//  Chapter 10.11
//  Converting a string to ints Integer Equivalent

#include "stdio.h"

int main(void){
    int strToInt(const char string[]);
    
    printf("%i\n", strToInt("245"));
    printf("%i\n", strToInt("100") + 25);
    printf("%i\n", strToInt("13x5"));
    
    
    return 0;
    
}





int strToInt(const char string[]){
    int i, intValue, result = 0;
    
    // a number character is always the same distance away from '0' as an integer number
    // in order to get the integer value subtract the character from character '0'
    for( i = 0; string[i] >= '0' && string[i] <= '9'; i++){
        intValue = string[i] - '0';
        result = result * 10 + intValue;
    }
    
    return result;
    
    
}