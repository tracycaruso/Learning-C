//  Learning-C-Practice
//  Working with Arrays
//  Chapter 7
//  ex 5
//  the array doubles the previous element and stores it in the next element


#include <stdio.h>

int main (void){
    
    int numbers[10] = { 1, 0, 0};
    int i, j;
    
    // loops through 3 times
    for(j = 1; j < 10; j++){
        // everytime outer loops is executed this loop increases execution by one
        printf("*********************\n");
        printf("Loop %i\n", j);
        printf("*********************\n");
        
        for(i = 0; i < j; i++){
            
            printf("number[j] = %i, index %i \n", numbers[j], j);
            printf("number[i] = %i, index %i \n", numbers[i], i);
            numbers[j] += numbers[i];
            printf("After [j] = %i, index %i \n\n", numbers[j], j);
            
        }
    }
    
    for(j=0; j< 10; j++){
        printf("Element %i : %i\n",j, numbers[j]);
    }
    
    printf("\n");
    
    
    
    
    return 0;
}