Author:Liban Hassan 
Date: 7th July 2024
Description: c functions
Registration Number:01-0068-2024
#include <stdio.h>

// function prototype
double volumeOfSphere(float r);

int main() {

    float radius;

    printf("Enter radius of the sphere: ");
    scanf("%f", &radius);

    // calling the function
    double volume = volumeOfSphere(radius);

    printf("\nThe volume of the sphere is: %.2lf", volume);

    return 0;
}

//function declaration
double volumeOfSphere(float r) {
    float pi = 3.142;
    return (4 / 3) * pi * (r * r * r);


    return 0;
}