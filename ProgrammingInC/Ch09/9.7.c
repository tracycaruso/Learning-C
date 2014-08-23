//  Learning-C-Practice
//  Structures
//  Chapter 9.7


#include <stdio.h>

// declare structure
struct month{
    int days;
    char abr[3];
};

int main(void){
    struct month months[12] = {
        { 31, {'J', 'A', 'N' } }, { 28, {'F', 'E', 'B' } }, { 31, {'M', 'A', 'R' } },
        { 30, {'A', 'P', 'R' } }, { 31, {'M', 'A', 'Y' } }, { 30, {'J', 'U', 'N' } },
        { 31, {'J', 'U', 'L' } }, { 31, {'A', 'U', 'G' } }, { 30, {'S', 'E', 'P' } },
        { 31, {'O', 'C', 'T' } }, { 30, {'N', 'O', 'V' } }, { 31, {'D', 'E', 'C' } }
    };
    
    printf("Month  Days\n");
    printf("-----  ----\n");
    
    for(int i = 0; i < 12; i++){
        printf("%c%c%c    %i\n", months[i].abr[0], months[i].abr[1], months[i].abr[2], months[i].days);
    }
    
    return 0;
    
}



