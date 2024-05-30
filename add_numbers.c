// importing the standard/input output library
#include <stdio.h>

//this is the main c function where code execute begins
int main() {
    // defining two variables
    int number1 = 10;
    int number2 = 20;
    
    //calculating the sum of the two numbers
    int sum = number1 + number2;
    
    //Displaying the result
    printf("The sum of %d and %d is %d", number1, number2, sum);

    //telling the os that our code was successfully executed
    return 0;
}