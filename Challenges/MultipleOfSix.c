// Multiples of 6

// Ideally the multiplesOfSix function would call both multiplesOfTwo and multiplesOfThree, however I am not yet sure how to return arrays to functions
// I believe pointers are probably involved


#include "stdio.h"


// declare function
void multiplesOfTwo(int array[], int length);
void multiplesOfThree(int array[], int length);
void multiplesOfSix(int array[], int length);



int main (void){
    
    
    int array2[15];
    
    int array2Length = 0;
    int x;
    
    // prompt user for values
    // 999 to end input
    
    for(x = 0; x < 15; x++){
        printf("Number : ");
        scanf("%i", &array2[x]);
        
        if(array2[x] == 999){
            break;
        }
        
        
    }
    array2Length = x;
    
    multiplesOfSix(array2, array2Length);
    
    
    
    
    return 0;
    
    
}


// multiples of six are multiples of both 2 and 3
void multiplesOfSix(int array[], int length){
    
    multiplesOfTwo(array, length);
    
};

// multiples of 2 end with even numbers or 0
void multiplesOfTwo(int array[], int length){
    int evenNumbers[length];
    int lastDigit;
    int ctr = 0;
    
    
    for(int i = 0; i < length; i++){
        lastDigit = array[i] % 10;
        if(lastDigit % 2 == 0  ||  lastDigit == 0){
            evenNumbers[ctr] = array[i];
            ctr++;
        }
    }
    
    
    
    multiplesOfThree(evenNumbers, ctr);
    
    
};

// the digits of multiples of 3 add up to a number divisable by 3
void multiplesOfThree(int array[], int length){
    
    int multiplesThree[length];
    int currentNum;
    int sumDigits = 0;
    int ctr = 0;
    
    
    
    for(int i = 0; i < length; i++){
        currentNum = array[i];
        
        while(currentNum != 0){
            sumDigits += currentNum % 10;
            currentNum /= 10;
        }
        
        if(sumDigits % 3 == 0){
            multiplesThree[ctr] = array[i];
            ctr++;
        }
        
        sumDigits = 0;
    }
    
    
    
    for(int i = 0; i < ctr; i++){
        printf("%i\n", multiplesThree[i]);
    }
    
    
    
    
};

