//  Learning-C-Practice
//  Variables and Constants
//  Chapter 3 - Teach Yourself C in 21 Days
//  3.1

//  Prints the storage space of each variable type

#include <stdio.h>


int main(void){
    
    printf("A char is %d bytes", (int)(sizeof(char)));
    
    printf("\nA int is %d bytes", (int)(sizeof(int)));
    
    printf("\nA short is %d bytes", (int)(sizeof(short)));
    
    printf("\nA long is %d bytes", (int)(sizeof(long)));
    
    printf("\nA long long is %d bytes", (int)(sizeof(long long)));
    
    printf("\nA unsigned char is %d bytes", (int)(sizeof(unsigned char)));
    
    printf("\nA unsigned int is %d bytes", (int)(sizeof(unsigned int)));
    
    printf("\nA unsigned short is %d bytes", (int)(sizeof(unsigned short)));
    
    printf("\nA unsigned long is %d bytes", (int)(sizeof(unsigned long)));
    
    printf("\nA unsigned long long is %d bytes", (int)(sizeof(unsigned long long)));
    
    printf("\nA float is %d bytes", (int)(sizeof(float)));
    
    printf("\nA double is %d bytes", (int)(sizeof(double)));
    
    printf("\nA long double is %d bytes", (int)(sizeof(long double)));
    
    return 0;
    
}







/***************************** VOCAB *******************************/


