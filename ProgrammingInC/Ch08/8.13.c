//  Learning-C-Practice
//  Functions
//  Chapter 8
//  8.13
//   Multidimensional Arrays and Functions

#include <stdio.h>

int main (void){
    
    void printMatrix(int array[5][5]);
    void multiplyMatrix(int array[5][5], int scalar);
    void decrementMatrix(int array[5][5], int scalar);
    
    int arrayMatrix[5][5];
    
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            arrayMatrix[i][j] = rand() % 100;
        }
    }
    
    printf("Original Matrix : \n");
    printf("------------------------\n");
    printMatrix(arrayMatrix);
    printf("------------------------\n");
    
    
    
    printf("Multiplied Matrix : \n");
    printf("------------------------\n");
    multiplyMatrix(arrayMatrix, 5);
    printMatrix(arrayMatrix);
    printf("------------------------\n");
    
    
    
    printf("Decremented Matrix : \n");
    printf("------------------------\n");
    decrementMatrix(arrayMatrix, 50);
    printMatrix(arrayMatrix);
    printf("------------------------\n");
    
    return 0;
    
}


// Print Matrix
void printMatrix(int array[5][5]){
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%3i  " , array[i][j]);
        }
        
        printf("\n");
    }
    
}


// Multiply Matrix
void multiplyMatrix(int array[5][5], int scalar){
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            array[i][j] *= scalar;
        }
        
        
    }
}


// Decrement Matrix
void decrementMatrix(int array[5][5], int scalar){
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            array[i][j] -= scalar;
        }
        
        
    }
}







