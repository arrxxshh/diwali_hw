#include<stdio.h>
#include "intro.c"
int main()
{
    intro();
    int s,sum=0,sump=0;
    printf("enter a number: ");
    scanf("%d",&s);
    int a=s;
    while (a!=0)
    { 
        //sum of digits of number
        sum += a%10;
        a/= 10;
    }
    for (int i = 2; i <= s; i++)
    {
        while (s%i==0)
        {
            if (i>9){
                //sum of digits two digit prime factor
                int a=i;
                while(a!=0){
                    sump += a%10;
                    a/= 10;
                } 
            }
            else{
                //sum of single digit prime factor
                 sump+=i;
                 }
            s/=i;
        }
        
    }
    (sump==sum)?printf("smith num"):printf("not a smith number");
}