//  Learning-C-Practice
//  Functions
//  Chapter 8
//  8.12
//  Sort Array


#include "stdio.h"


void sort (int a[], int n);

int main (void){
    
    int i;
    
    int array[16] = { 34, 6 ,8 , 10, -50, 55, 100, 1000, 432, 109, 443, 154, 65, 37, -90, -50};
    
    printf("The array before the sort:\n");
    
    // print array values
    for(i = 0; i < 16; i++){
        printf("%i ", array[i]);
    }
    
    // send current array to function
    sort(array, 16);
    
    // function will change values with in the array
    // stores them in order
    // and returns ordered array
    printf("\n\nThe array after the sort:\n");
    
    
    
    for ( i = 0; i < 16; i++){
        printf("%i ", array[i]);
    }
    
    printf("\n");
    
    return 0;
    
}

// array , 16
void sort (int a[], int n){
    
    int i, j, temp;
    
    // 0 < 15 ... loops 15 times
    for(i = 0; i < n - 1; i++){
        
        /// repeats 16 times, everytime previous loop is called
        // 1 < 16 ... places index one ahead for comparison
        for(j = i + 1; j < n; j++){
            
            // if the current value is larger
            if(a[i] > a[j]){
                
                // store current value in temp location
                temp = a[i];
                
                // outside number is replaced with smaller number
                a[i] = a[j];
                
                // inside number is relaced with larger number
                a[j] = temp;
            }
        }
    }
    
    
    
}
