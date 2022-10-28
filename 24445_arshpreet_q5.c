#include<stdio.h>
#include "intro.c"
int main()
{
    intro();
    int age;
    printf("enter the age: ");
    scanf("%d",&age);
    if (age>=0 && age<=3)
    printf("Toddler");
    else if (age>=4 && age <=12)
    printf("Juniors");
    else if (age>=13 && age<=17)
    printf("Teenager");
    else
    (age>0 && age<=100) ? printf("Adult") : printf("invalid input");

    (age<18) ? printf("\nallowed") : printf("\nnot allowed");
    
    
}