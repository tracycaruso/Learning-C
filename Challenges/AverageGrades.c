// Average Grades

#include "stdio.h"

int main (void){
    
    void getGrades(int gds[], int lngth);
    int avgGrades(int gds[], int lngth);
    int numGrades;
    
    printf("How many grades would you like to enter? : ");
    scanf("%i", &numGrades);
    
    int grades[numGrades];
    
    getGrades(grades, numGrades);
    
    printf("The class average is : %i\n", avgGrades(grades, numGrades));
    
    
}

void getGrades(int gds[], int lngth){
    
    for(int i = 0; i < lngth; i++){
        printf("Please enter grade number %i : ", i + 1);
        scanf("%i", &gds[i]);
    }
    
}

int avgGrades(int gds[], int lngth){
    
    int total = 0;
    for(int i = 0; i < lngth; i++){
        total += gds[i];
    }
    
    return total /= lngth;
}

