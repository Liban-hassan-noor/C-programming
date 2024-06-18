/*
Author:Liban Hassan
Date:13/6/2024
Description:Calculating electric bill
Reg No:BSE-01-0068/2024
*/

// Calculation of electric bill
#include <stdio.h>
int main(){
    char CustomerName[20];
    int CustomerID, unit_consumed;
    float  bill;
    
    printf("please enter name: ");
    scanf(" %c", &CustomerName);
    
    printf("enter customer ID: ");
    scanf("%d", &CustomerID);
    
    printf("enter unit consumed: ");
    scanf("%d", &unit_consumed);
    
    if (unit_consumed >=1 && unit_consumed <= 199){
        bill = unit_consumed * 1.20;
    } else if (unit_consumed >= 200 && unit_consumed < 400){
        bill=unit_consumed * 1.50;
    } else if (unit_consumed >= 400 && unit_consumed < 600){
        bill = unit_consumed * 1.80;
    } else if (unit_consumed >= 600){
        bill = unit_consumed * 2.00;
    }
    
    if (bill > 400) {
        bill = bill + (bill * 0.15);
    }
    
    if (bill >= 100) {
        printf("The bill is %.2f", bill);
    }

    return 0;
} 