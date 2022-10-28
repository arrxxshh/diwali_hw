#include<stdio.h>
#include "intro.c"
int main()
{
    intro();
    int uid,nou;
    char name[5];
    printf("enter user_id , user_name and number of units consumed : ");
    scanf("%d %s %d",&uid,&name,&nou);
    float total;
    if (nou<=100){
    total=1*nou;
    (total<50)?total=50:total;
    }
    else if(nou>=100 && nou<=300)
    total=2*nou;
    else
    {
    total=3*nou;
    }
    (total>1000)?total+=0.15*total:total;

    printf("%d %s %0.2f", uid,name,total);
}
    