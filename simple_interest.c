// importing the standard/input output library
#include <stdio.h>

//This is the main c function where execution begins
int main() {
    float principal, rate, time, simple_interest;
    
    //taking input from user
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter rate(%): ");
    scanf("%f", &rate);
    
    printf("Enter time(years): ");
    scanf("%f", &time);
    
    //calculating simple interest
    simple_interest = principal * rate * time;
    
    printf("\nThe simple interest is %.2f", simple_interest);
}