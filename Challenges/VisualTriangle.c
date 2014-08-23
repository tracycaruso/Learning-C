// Triangle Number with visual

// n + n-1 + n - 2
#include <stdio.h>


int main (void){
    
    int triangle(int num);
    
    printf("%i\n", triangle(5));
    
    
    
    return 0;
}


int triangle(int num){
    
    int tri = 0;
    
    for(int i = 0; i < num; i++){
        
        // add 1 to the triangle 5 times
        // add 1 to the triangle 4 times
        // add 1 to the triangle 3 times
        // add 1 to the triangle 2 times
        // add 1 to the triangle 1 times
        for(int j = i; j < num; j++){
            printf("X");
            tri++;
            
        }
        
        printf(" %3i + ", tri);
        printf("\n");
        
        
    }
    
    return tri;
    
}
