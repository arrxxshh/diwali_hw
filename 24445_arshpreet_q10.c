#include<stdio.h>
#include "intro.c"
int main()
{
    intro();
    int roll_no,mrks;
    char name[5];
    printf("enter your name , roll number and marks : ");
    scanf("%s %d %d",&name,&roll_no,&mrks);
    if (mrks>=90)
    printf("%d %s %d A",roll_no,name,mrks);
    else if (mrks>=70)
    printf("%d %s %d B",roll_no,name,mrks);
    else if (mrks>=50)
    printf("%d %s %d C",roll_no,name,mrks);
    else if (mrks>=33)
    printf("%d %s %d D",roll_no,name,mrks);
    else
    printf("%d %s %d FAIL",roll_no,name,mrks);

    
    
    
    
}