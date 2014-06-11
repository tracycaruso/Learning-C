//  Learning-C-Practice
//  Reading & Writing
//  Chapter 1 - 7 Review - Teach Yourself C in 21 Days
//
//  Long Problem

//  Average Salary


#include <stdio.h>

/********************/
/* Define Constants */
/********************/

#define MAX 100
#define YES 1
#define NO 0

/*********************/
/* Declare Variables */
/*********************/

long    income[ MAX ];
int     month[ MAX ];
int     day[ MAX ];
int     year[ MAX ];
int     x, y, ctr;
int     cont;
long    month_total, grand_total;

/***********************/
/* Function Prototypes */
/***********************/

int main(void);
int display_instructions(void);
void get_data(void);
void display_report(void);
int continue_functon(void);


/*----------------------------*/
/* START PROGRAM */
/*----------------------------*/

int main(void){
    
    cont = display_instructions();
    
    if(cont == YES){
        get_data();
        display_report();
    }
    else{
        printf("\nProgram Aborted!\n\n");
    }
    
    return 0;
    
}

/*---------------------------------------------*/
// Function : display _instructions()
// Purpose  : Displays instructions for the user
//            Asks user to continue(1) or exit(0)
// Returns  : NO (0) , YES (!0)
/*---------------------------------------------*/

int display_instructions(void){
    printf("\n\n");
    printf("\nThis program enables you to tenter up to 99 people\'s incomes and birthdays.\n");
    printf("It then prints the incomes by month along with the overll income and overall average.");
    printf("\n");
    
    cont = continue_function();
    return(cont);
}

/*-------------------------------------------------------------*/
// Function : get_data() *
// Purpose  : This function gets the data from the user. It
//            continues to get data until either 100 people are
//            entered, or until the user enters 0 for the month.
// Returns  : nothing *
// Notes    : This allows 0/0/0 to be entered for birthdays in
//            case the user is unsure. It also allows for 31
//            days in each month
/*--------------------------------------------------------------*/

void get_data(void){
    for(cont = YES, ctr = 0; ctr < MAX && cont == YES; ctr++) {
        printf("\nEnter information for Person %d.", ctr+1);
        printf("\n\tEnter Birtday:");
        do{
            printf("\n\tMonth(0 - 12): ");
            scanf("%d", &month[ctr]);
        } while(month[ctr] < 0 || month[ctr] > 12);
        do{
            printf("\n\tDay (0 - 31): ");
            scanf("%d", &day[ctr]);
        } while(day[ctr] < 0 || day[ctr] > 31);
        do{
            printf("\n\tYear (0 - 2002): ");
            scanf("%d", &year[ctr]);
        } while(year[ctr] < 0 || year[ctr] > 2002);
        
        printf("\nEnter Yearly Income (whole dollars) : ");
        scanf("%ld", &income[ctr]);
        
        cont = continue_function();
    }
}

/*--------------------------------------------------------------*/
// Function : display_report()
// Purpose  : This function displays a report to the screen
// Returns  : Nothing
// Notes    : More information could be printed
/*--------------------------------------------------------------*/

void display_report(){
    grand_total = 0;
    printf("\n\n\n");
    printf("\n      SALARY SUMMARY");
    printf("\n     ===============");
    
    for( x = 0; x <= 12; x++){
        month_total = 0;
        for( y = 0; y < ctr; y++){
            if(month[y] == x){
                month_total += income[y];
            }
        }
        printf("\nTotal for month %d is %ld", x, month_total);
        grand_total += month_total;
    }
    printf("\n\nReport Totals: ");
    printf("\nTotal Income is %ld : ", grand_total);
    printf("\nAverage Income is %ld", grand_total/ctr );
    
    printf("\n\n* * * End of Report * * *\n");
    
}

/*--------------------------------------------------------------*/
// Function : continue_function()
// Purpose  : This function asks the user if they wish to continue
// Returns  : YES - to continue   NO - to quit
/*--------------------------------------------------------------*/

int continue_function(void){
    printf("\n\nDo you wish to continue? (0=NO/1=YES) : ");
    scanf("%d", &x);
    
    while( x  < 0|| x >1 ){
        printf("\n%d is invalid!", x);
        printf("\nPlease enter 0 to Quit or 1 to Continue: ");
        scanf("%d", &x);
    }
    if(x == 0)
        return(NO);
    else
        return(YES);
}


