//  What Character?
#include "stdio.h"
#include "string.h"


int main (void){
    
    char character;
    
    printf("Please enter a character : ");
    character = getchar();
    
    if(character >= 'a' && character <= 'z'){
        printf("You typed a lowercase letter\n");
    }
    else if(character >= 'A' && character <= 'Z'){
        printf("You typed an uppercase letter\n");
    }
    else if(character >= '0' && character <= '9'){
        printf("You typed a number\n");
    }
    else{
        printf("You typed a special character dawg\n");
    }
    
    return 0;
    
    
    
}

