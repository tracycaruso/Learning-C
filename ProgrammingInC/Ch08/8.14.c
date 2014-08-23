//  Learning-C-Practice
//  Functions
//  Chapter 8
//  8.14
//  Converting a Positive Integer to Another Base


#include <stdio.h>

void getNumberAndBase(void);
void convertNumber(void);
void displayConvertedNumber(void);

int convertedNumber[64];
long int numberToConvert;
int base;
int digit = 0;


int main(void){
    
    getNumberAndBase();
    convertNumber();
    displayConvertedNumber();
    
    return 0;
}

// Function gets number and base from user
// if base is not between 1-16 returns a base of 10

void getNumberAndBase(void){
    
    
    printf("Number to be converted? : ");
    scanf("%li", &numberToConvert);
    
    printf("Base? : ");
    scanf("%i", &base);
    
    if( base < 2 || base > 16){
        printf("Bad base\n");
        base = 10;
    }
}

// gets right most digit from number
// stores digit in array
// gets next number in array
// n / base == current number position in that base
void convertNumber(void){
    
    
    do{
        
        /*******Base 10 *********/
        // convertedNumber[0] = 101 % 10 = 1
        // convertedNumber[0] = 10 % 10 = 0
        
        /*******Base 16 *********/
        // convertedNumber[0] = 101 % 16 = 5
        // convertedNumber[0] = 6 % 16 = 6
        
        /*******Base 2 *********/
        // convertedNumber[0] = 101 % 2 = 1
        // convertedNumber[0] = 50 % 2 = 0
        // convertedNumber[0] = 25 % 2 = 1
        // convertedNumber[0] = 12 % 2 = 0
        // convertedNumber[0] = 6 % 2 = 0
        // convertedNumber[0] = 3 % 2 = 1
        // convertedNumber[0] = 1 % 2 = 1
        
        convertedNumber[digit] = numberToConvert % base;
        ++digit;
        
        /*******Base 10 *********/
        // numberToConvert = 101 / 10 = 10
        // numberToConvert = 10 / 10 = 0
        
        /*******Base 16 *********/
        // numberToConvert = 101 / 16 = 6
        // numberToConvert = 6 / 16 = 0
        
        /*******Base 2 *********/
        // numberToConvert = 101 / 2 = 50
        // numberToConvert = 50 / 2 = 25
        // numberToConvert = 25 / 2 = 12
        // numberToConvert = 12 / 2 = 6
        // numberToConvert = 6 / 2 = 3
        // numberToConvert = 3 / 2 = 1
        // numberToConvert = 1 / 2 = 0
        
        numberToConvert /= base;
    }
    
    while(numberToConvert != 0);
    
}
// Converts number and prints backwards

void displayConvertedNumber(void){
    const char baseDigits[16] =
    {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int nextDigit;
    
    printf("Converted number = ");
    
    // subtract 1 from current digit ... count digits backwards
    for(--digit; digit >= 0; --digit){
        // store current digit
        nextDigit = convertedNumber[digit];
        // convert digit to its base
        printf("%c", baseDigits[nextDigit]);
    }
    
    printf("\n");
}