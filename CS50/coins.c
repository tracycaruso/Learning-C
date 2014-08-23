// CS50
// This program converts a dollar amount to coins, using the least amount of coins possible

#include <stdio.h>

// declare constants for coin values
#define QUARTER 25
#define DIME 10
#define NICKEL 5
#define PENNY 1


int main(void){
    
    // current change needed
    float change = 100.30;
    
    // counters to keep track of how many of each coin will be returned
    int quarters = 0, dimes = 0, nickels = 0, pennies = 0;
    
    // array of the coin value constants
    int coins[4] = { QUARTER, DIME, NICKEL, PENNY };
    
    // array of variables to keep track of the number of each coin
    int coinNum[4] = {quarters, dimes, nickels, pennies};
    
    // removes decimal from change given
    int intChange = change * 100;
    
    
    // Loops through 4 times to account for each type of coin
    for(int z = 0; z < 4; z++){
        
        // while the current change value is larger than the current coin value, subtract the current coin value
        // ex : for(int a = intChange; a >= QUARTER; a -=QUARTER)
        for(int a = intChange; a >= coins[z]; a -= coins[z])
        {
            // add one to the current coin's count
            // ex : quarters++;
            coinNum[z]++;
            
        }
        
        // multiple the current coin value by the current coin count, subtract that value from the total change
        // ex :  intChange = intChange - (quarters * QUARTER);
        intChange = intChange - (coinNum[z] * coins[z]);
        
        // if the current change value is less than 0 break loop
        if(intChange < 0){
            break;
            return 0;
        }
        
        
    }
    // print the amount of each coin used to make the change
    printf("The change is : %i Quarters, %i Dimes, %i Nickels, %i Pennies.\n", coinNum[0], coinNum[1], coinNum[2], coinNum[3]);
    
    
    
    return 0;
    
    
}