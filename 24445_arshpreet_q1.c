#include<stdio.h>
#include "intro.c"
int main()
{
    intro();
    int number;
    printf("enter a number ");
    scanf("%d",&number);
    if (number & 1) {
        printf("odd");
    }
    else
    printf("even");



}