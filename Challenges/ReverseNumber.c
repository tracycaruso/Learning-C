// Reverse a number

#include "stdio.h"

int main (void){
    
    int numLength(long int number);
    long int reverse(long int number, int lngth);
    
    long int num, reversed;
    int length;
    
    // get number from user
    do{
        printf("Please enter a positive integer less than 9 digits long to reverse : ");
        scanf("%ld", &num);
    } while ((num < 0) || (num > 999999999));
    
    // find the number of digits
    length = numLength(num);
    // pass number and number of digits to be reversed
    reversed = reverse(num, length);
    
    printf("%ld reversed is %ld\n", num, reversed);
}

int numLength(int long number){
    
    int counter;
    
    while(number != 0){
        number = number / 10;
        counter ++;
    }
    
    return counter;
    
}

long int reverse(long int number, int lngth){
    
    int digit = 0, i = 0, x = 1;
    int reverse[lngth];
    
    // break number down to its digits to reverse
    // store in an array
    while(number != 0){
        digit = number % 10;
        reverse[i] = digit;
        number = number / 10;
        i++;
    }
    
    // turn reverse digit array in to an integer value
    for(int j = lngth; j >= 0; j--){
        reverse[j - 1] *= x;
        number += reverse[j];
        x *= 10;
        
    }
    
    
    // return the number reversed
    return number;
    
    
}

