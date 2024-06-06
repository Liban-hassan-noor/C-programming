#include <stdio.h>

int main() {
    int age;
    char citizen;
    
    printf("enter age:");
    scanf("%d", &age);
    
    printf("are you a kenyan citizen y/n ");
    scanf(" %c", &citizen);
    
    if (age>=18 && citizen == 'y'){
        printf("you are eligible to vote");
    } else{
    printf("you are not eligible to vote ");}
   
}