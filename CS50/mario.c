// CS50
// Mario

#include <stdio.h>

int main(void){
    
    int rowCount = 10;
    char hash = '#';
    char space = ' ';
    int hashCount = 1;
    int spaceCount = rowCount;
    
    // loop though however many rows exits
    // EX : 10
    for(int i = 0; i < rowCount; i++){
        
        // this variable starts with the same count as the row count
        // EX : spaceCount == 10 (for the first iteration)
        // everytime the row loops space count will be decremented by 1
        spaceCount--;
        
        
        // the first time this loop executes it will it print 9 spaces
        // as the spaceCount is decremented, less spaces will be printed
        for(int j = 0; j <= spaceCount; j++){
            printf("%c", space);
        }
        
        // this variable starts at what ever hash count is given
        // EX : 1 (by starting at 1 the first line of hashes will contain 2 hashes_
        hashCount++;
        
        
        // the first time this loop executes it will print 2 hashes
        // this is because x < 1 needs to run 2 times until it is true
        // every iteration of the outer loop will cause the hashCount to be incremented
        // do to this the number of hashes printed will also increase
        for(int x = 0; x < hashCount; x++){
            printf("%c", hash);
        }
        
        
        
        
        printf("\n");
        
    }
    
    
    
    return 0;
}