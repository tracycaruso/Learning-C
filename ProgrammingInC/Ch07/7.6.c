//  Learning-C-Practice
//  Working with Arrays
//  Chapter 7
//  7.6
//  Character Arrays


#include <stdio.h>

int main (void){
    
    // C will automatically determine the length of this array to 0-6, extra space for null zero
    char word[] = { 'H', 'E', 'L', 'L',  'O', '!' };
    int i;
    
    for(i = 0; i < 6; i++){
        printf("%c", word[i]);
    }
    
    printf("\n");
    
    return 0;
}