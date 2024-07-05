/*
Author: Liban Hassan
Date: 5/7/2024
Description: Structures in C language
Registration number: BSE-01-0068-2024
*/  
#include <stdio.h>
#include<string.h>

struct student {
    
    int phone_number;
    char first_name[20];
    char last_name[20];
    float gpa;
    char email[50];
    int age;
};

int main() {
    struct student student1;
    
    strcpy(student1.first_name, "Liban");
    strcpy(student1.last_name, "Hassan");
    student1.phone_number= 702099065;
    strcpy(student1.email, "libanhassan@zetech.ac.ke");
     student1.gpa= 3.5;
     student1.age=20;
     
     printf("First name:%s\n ",student1.first_name );
     printf("last name: %s\n ", student1.last_name);
     printf("email: %s\n", student1.email);
     printf("age: %d\n", student1.age);
     printf("gpa: %.2f\n", student1.gpa);
    printf("phone number: %d\n", student1.phone_number);


    
     return 0;   
    }



