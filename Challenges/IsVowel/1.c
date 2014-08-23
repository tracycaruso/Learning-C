// Count Vowels in Name


#include "stdio.h"
#include "string.h"

int isVowel(int arr[]);

int main (void){
    
    char name[30];
    int x = 0;
    
    printf("What is your name? : ");
    scanf("%s", name);
    
    for(int i = 0; i < strlen(name); i++){
        
        if(name[i] == 'a' || name[i] == 'u'){
            x++;
        }
        
    }
    
    printf("You have %i vowels in your name\n", x);
    
    
}



