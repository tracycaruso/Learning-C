//  Learning-C-Practice
//  Character Strings
//  Chapter 10.2
//  Count Characters in String


#include "stdio.h"

int stringLength(const char string[]){
    
    int count = 0;
    
    while(string[count] != '\0'){
        count++;
    }
    
    return count;
    
}

int main (void){
    
    int stringLength(const char string[]);
    
    const char str1[] = "This is a bunch"; // automatically adds null character
    const char str2[] = {'T','h','i','s',' ','i','s',' ','a',' ','b','u','n','c','h', '\0'}; // must add null character to signify end
    
    const char str3[] = "Hello"; // automatically adds null character
    const char str4[] = {'H', 'e', 'l', 'l', 'o', '\0'}; // must add null character to signify end
    const char str5[] = {'H', 'e', 'l', 'l', 'o', '!'}; // returns random number b/c doesnt know what the end is without \0
    
    
    int st1, st2, st3, st4, st5;
    
    st1 = stringLength(str1);
    st2 = stringLength(str2);
    st3 = stringLength(str3);
    st4 = stringLength(str4);
    st5 = stringLength(str5);
    
    
    printf("String 1 is %i characters long\n", st1);
    printf("String 2 is %i characters long\n", st2);
    printf("String 3 is %i characters long\n", st3);
    printf("String 4 is %i characters long\n", st4);
    printf("String 5 is %i characters long\n", st5);
    
    return 0;
    
    
}