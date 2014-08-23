//  Learning-C-Practice
//  Functions
//  Chapter 8
//  8.13a
//   Multidimensional Arrays and Functions with Variable Lengths

#include <stdio.h>

int main (void){
    
    void scalarMultiply(int nRows, int nCols, int matrix[nRows][nCols], int scalar);
    void displayMatrix(int nRows, int nCols, int matrix[nRows][nCols]);
    
    int sampleMatrix[3][5] =
    {
        { 1, 4, 5, 6, 7 },
        { 10, 4, 10, 43, 90 },
        { 99, 23, 98, 0, -4 }
    };
    
    
    printf("Original Matrix : \n");
    displayMatrix(3, 5, sampleMatrix);
    
    scalarMultiply(3, 5, sampleMatrix, 2);
    printf("\nMultipled by 2 : \n");
    displayMatrix(3, 5, sampleMatrix);
    
    
    scalarMultiply(3, 5, sampleMatrix, -1);
    printf("\nMultipled by -1 : \n");
    displayMatrix(3, 5, sampleMatrix);
    
    return 0;
}


void scalarMultiply(int nRows, int nCols, int matrix[nRows][nCols], int scalar){
    int row, column;
    
    for(row = 0; row < nRows; row++){
        for(column = 0; column < nCols; column++){
            matrix[row][column] *= scalar;
        }
    }
}


void displayMatrix(int nRows, int nCols, int matrix[nRows][nCols]){
    int row, column;
    
    for(row = 0; row < nRows; row++){
        for(column = 0; column < nCols; column++){
            printf("%5i", matrix[row][column]);
        }
        printf("\n");
    }
}
