// CS50
// This program checks credit cards to see if they are valid

#include <stdio.h>

int array15[15];
int arrayEven[8];
int arrayOdd[7];

int splitNums( int num1, int num2);


int main(void){
    long long num = 378282246310005;
    int tempNum, tempNum2;
    int totalSum;
    
    // store numbers in array
    for(int i = 0; i < 15; i++){
        tempNum = num % 10;
        array15[i] = tempNum;
        num = (num - tempNum) / 10;
    }
    
    // print array
    for(int i = 0; i < 15; i++){
        printf("%i", array15[i]); 
    }
    
    // store ever other number in array
    int z = 0;
    for(int i = 0; i < 8; i++){
        arrayEven[i] = array15[z];
        z += 2;
    }
    
    // multiply each remaining number by 2
    // store in array
    int x = 1;
    for(int i = 0; i < 7; i++){
        arrayOdd[i] = array15[x] * 2;
        x+= 2;
    }
    
    // break down products of numbers to single digits
    
    for(int i = 0; i < 7; i++){
        if(arrayOdd[i] < 10){
            totalSum += arrayOdd[i];
        }
        else{
            tempNum2 = arrayOdd[i] % 10;;
            totalSum += tempNum2;
            totalSum += (arrayOdd[i] - tempNum2)/10;
        }
        
    }
    
    // Add remaining array numbers to total sum
    
    for(int i = 0; i < 8; i++){
        totalSum += arrayEven[i];
    }
    
    
    printf("\nTotal sum : %i\n", totalSum);
    
}




// CS50
// This program checks credit cards to see if they are valid

#include <stdio.h>

#define NUM13 13
#define NUM15 15
#define NUM16 16

int checkCardType(long long credNum);
int checkCardLength(int type);



int main(void){
    
    int cardType;
    int cardLength;
    long long num = 378282246310005;
    
    
    
    cardType = checkCardType(num);
    printf("Card : %i\n", cardType);
    cardLength = checkCardLength(cardType);
    
}

// Find Card Type
int checkCardType(long long credNum){
    
    int type;
    int amEX = 0;
    int master = 1;
    int visaSm = 2;
    int visaLg = 3;
    
    // Am Ex Check
    if((credNum >= 340000000000000 && credNum <= 349999999999999) || (credNum >= 370000000000000 && credNum <= 379999999999999)){
        printf("This card is an AmEX.\n");
        type = amEX;
        
    }
    
    // Master Card Check
    else if(credNum >= 5100000000000000 && credNum <= 5599999999999999){
        printf("This card is a Master Card.\n");
        type = master;
        
    }
    
    // Visa 1 Card Check
    else if((credNum >= 4000000000000 && credNum <= 4999999999999) || (credNum >= 4000000000000000 && credNum <= 4999999999999999)){
        if(credNum <= 4999999999999){
            type = visaSm;
        }
        else{
            type =  visaLg;
        }
        
        printf("This card is a Visa\n");
        
        
    }
    
    else {
        printf("Not a valid number\n");
        type = 99;
    }
    
    
    return type;
    
};



// Find Card Length
int checkCardLength(int type){
    
    int array13[NUM13];
    int array15[NUM15];
    int array16[NUM16];
    
    int length;
    printf("%i\n", type);
    
    // is amEx
    if( type == 0 ){
        array15[i];
    }
    
    // is master or visaLg
    else if(type == 1 || type == 3){
        length = NUM16;
    }
    
    // is visaSm
    else if(type == 3){
        length = NUM13;
    }
    else{
        ;
    }
    
    return length;
};