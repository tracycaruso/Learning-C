// Ascending Sort


#include "stdio.h"


// print array
void printArray(int array[], int length);
// sort function
void sort(int array[], int length);


int main (void){
    
    int array[10] = {4, 5, 2, 90, 54, 10, 999, -2, -10, 88};
    
    printArray(array, 10);
    sort(array, 10);
    printArray(array, 10);
    
    return 0;
}


// print array
void printArray(int array[], int length){
    
    for(int i = 0; i < 10; i++){
        printf("%3i | ", array[i]);
    }
    
    printf("\n");
    
}


// sort function
void sort(int array[], int length){
    int temp = 0;
    
    for(int i = 0; i < length; i++){
        
        for(int j = i + 1; j < length; j++){
            if( array[i] > array[j]){
                
                
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                
                
            }
            
        }
    }
    
    
    
}



