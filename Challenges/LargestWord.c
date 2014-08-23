#include <stdio.h>
#include <string.h>
int main(void) {
    
    char input[]="which is theeeeee largest word this is the largest monkey   abcdefghijklmnopqrstuvwxyz ";
    char string[81];
    char lgString[81];
    
    int i, j = 0, x = 0;
    int largestNum = 0;
    
    for(i = 0; i < strlen(input); i++){
        
        if(input[i] != ' '){
            string[j] = input[i];
            j++;
        }
        else{
            if(j > largestNum){
                largestNum = j;
                for(x = 0; x < largestNum; x++){
                    lgString[x] = string[x];
                }
            }
            j = 0;
            
        }
        
        lgString[x + 1] = '\0';
    }
    
    printf("%s\n", lgString);
    
    
    
    return 0;
}

