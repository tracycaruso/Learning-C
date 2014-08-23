//  Learning-C-Practice
//  Character Strings
//  Chapter 10.1
//  Concatenate two character arrays


#include "stdio.h"

// takes 5 parameters :
// 1) An array to store the final result it
// 2) The first array to concatenate
// 3) The length of the first array
// 4) The second array to concatenate
// 5) The length of the second array
void concat(char result[], const char str1[], int n1, const char str2[], int n2){
    
    int i, j;
    
    // loop through the length of the first array and store it in the result array
    for(i = 0; i < n1; i++){
        result[i] = str1[i];
    }
    
    // loop through the length of the second array and store it after the first arrays characters
    for(j = 0; j < n2; j++){
        // by adding the length of the first array, you skip the previously stored characters
        // and store the new word after
        result[n1 + j] = str2[j];
    }
    
    
}


int main (void){
    //function prototype
    void concat(char result[], const char str1[], int n1, const char stra2[], int n2);
    // strings to concatenate
    const char s1[5] = "Test ";
    const char s2[6] = "Works.";
    // array to store the final string
    char s3[11];
    int i;
    
    for(int x = 0; x < 5; x++){
        printf("[%x] = %c\n", x, s1[x]);
    }
    printf("\n\n");
    
    for(int x = 0; x < 6; x++){
        printf("[%x] = %c\n", x, s2[x]);
    }
    
    concat(s3, s1, 5, s2, 6);
    
    // print the final string
    for(i = 0; i < 11; ++i){
        printf("%c", s3[i]);
    }
    
    printf("\n");
    
    return 0;
}