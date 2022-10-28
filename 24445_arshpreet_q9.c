#include<stdio.h>
#include "intro.c"
int main()
{
    intro();
    int opr,no1,no2;
    printf("enter first value: ");
    scanf("%d",&no1);
    printf("enter second  value: ");
    scanf("%d",&no2);
    printf("choose the operation:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d",&opr);
    switch (opr)
    {
    case 1 :
    printf("value after addition is %d",no1+no2);
    break;
    case 2 :
    printf("value after subtraction is %d",no1-no2);
    break;
    case 3 :
    printf("value after multiplication is %d",no1*no2);
    break;
    case 4 :
    printf("value after division is %0.2f",(float)no1/no2);
    break;
    }
    
    
}