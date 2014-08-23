// sort a number


#include "stdio.h"

void sort(int array[10]);

int main (void){
    
    int array[10];
    long number = 8463269653;
    
    
    for(int i = 0; i < 10; i++){
        array[i] = number % 10;
        number = number / 10;
    }
    
    
    for(int i = 0; i < 10; i++){
        printf("%i", array[i]);
    }
    
    printf("\n");
    
    sort(array);
    
    for(int i = 0; i < 10; i++){
        printf("%i", array[i]);
    }
    
    printf("\n");
    
}


void sort(int array[10]){
    
    int temp;
    
    for(int i = 0; i < 10; i ++){
        for(int j = i + 1; j < 10; j++){
            
            if(array[j] < array[i]){
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
                
            }
            
        }
    }
    
    
}