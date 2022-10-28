#include<stdio.h>
#include "intro.c"
int main()
{
    intro();
    int nos,teams;
    printf("enter the number of students and number of teams  : ");
    scanf("%d %d",&nos,&teams);
    printf("number of students in each team is %d and left out is %d",nos/teams,nos%teams);

}