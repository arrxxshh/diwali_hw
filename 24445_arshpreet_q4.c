#include<stdio.h>
#include "intro.c"
int main()
{
    intro();
    int cp,ovrhd,sp;
    float gain;
    printf("enter cost price,overhead expenses and selling pricen : ");
    scanf("%d%d%d",&cp,&ovrhd,&sp);
    gain=(float)(sp-cp-ovrhd)*100/(cp+ovrhd);
    printf("gain percent  is %0.2f",gain);
    
}