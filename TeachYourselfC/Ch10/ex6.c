//  Learning-C-Practice
//  Characters & Strings
//  Chapter 10 Review - Teach Yourself C in 21 Days
//  Ex 6


#include <stdio.h>

int longer(char string[]);

char string1[100], string2[100];
char *ptr;
int length1, length2;

int main(void){
    
    printf("Type string 1 : ");
    gets(string1);
    
    printf("Type string 2 : ");
    gets(string2);
    
    length1 = longer(string1);
    length2 = longer(string2);
    
    if(length1 == length2){
        printf("tThe Strings are the same size\n");
    }
    else if(length1 > length2){
        printf("String 1 is the Longest\n");
    }
    else{
        printf("String 2 is the Longest\n");
    }
    
    ptr = (length1 > length2) ? string1 : string2;
    
    printf("Pointer Location : %d, Pointer Value : %s\n" , *ptr, ptr);
    
}

int longer(char string[]){
    int i, temp = 0;
    
    for(i = 0; i < 1000; i++){
        temp++;
        if(string[i] == NULL){
            break;
        }
    }
    return temp;
}










/***************************** VOCAB *******************************/
// Character : Single Letter, Numeral, Puncutation Mark or other Symbol
// String : andy sequence of charcters
// ASCII character set : 0 - 255 code values that represent letters, digits, punctuation, and other symbols
// Dynamic Allocation : allocate space to a program while the program is executing
// malloc() : memory allocation function