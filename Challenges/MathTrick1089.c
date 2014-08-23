// Math Trick
// Number reversals

#include <stdio.h>


int reverseNum(int num);
int difNum(int num, int num2);
int sumNum(int num, int num2);

int main (void){
    
    int number, reverse, reverse2, difference, sum;
    
    // Get Number from User
    printf("Please enter a 3 digit number in which the digits decrease in value (i.e. 542) : ");
    scanf("%i", &number);
    
    // Reverse number
    reverse = reverseNum(number);
    
    // Subtract original number from reversed number
    difference = difNum(number, reverse);
    
    // Take the difference of the previous equation and reverse the digits
    reverse2 = reverseNum(difference);
    
    // Add the difference and and the reversed number
    sum = sumNum(difference, reverse2);
    
    // return value : will always be 1089
    printf("%i - %i = %i,  %i + %i = %i\n",  number, reverse, difference, difference, reverse2, sum);
    
}

int reverseNum(int num){
    
    int rev = 0;
    
    while(num != 0){
        rev = rev * 10;
        rev = rev + (num % 10);
        num = num/10;
        
    }
    
    return rev;
}


int difNum(int num, int num2){
    
    num -= num2;
    
    return num;
    
}

int sumNum(int num, int num2){
    
    num += num2;
    
    return num;
    
}




