//  Learning-C-Practice
//  Character Strings
//  Chapter 10.5
//  program to illustrate the %s scanf format characters


#include "stdio.h"

int main(void){
    // holds 3 words
    char s1[81], s2[81], s3[81];
    
    printf("Enter text:\n");
    
    // stores words separated by spaces or return characters
    scanf("%s%s%s", s1, s2, s3);
    
    // prints back words
    printf("\ns1 = %s\ns2 = %s\ns3 = %s\n",s1, s2, s3);
    
    return 0;
}