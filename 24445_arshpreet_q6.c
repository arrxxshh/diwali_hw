#include<stdio.h>
#include<math.h>
#include "intro.c"
int main()
{
   intro();
   int num,sqr,cnt=0;
   printf("enter a number :");
   scanf("%d",&num);
   sqr=num*num;
   //count the digits of number
   int b=sqr;
   while (b!=0)
   {
      b/=10;
      cnt++;
   }
   //divding number into two parts
   int n1,n2;
   if (cnt%2==0)
   {
      n1=sqr/pow(10,cnt/2);
      n2=sqr%(int)pow(10,cnt/2);
   }
   else
   {
      n1=sqr/pow(10,(cnt/2)+1);
      n2=sqr%(int)pow(10,(cnt/2)+1);
   }
((n1+n2)==num)?printf("keprekar number"):printf("not a keprekar number");
   
}
    