#include<stdio.h>
#include<conio.h>
void main()
{
    int a=6,b=2,sum,sub,mul,div;
    char operator='*';
    //printf("enter the a and b values:\n");
    //scanf("%d %d",&a,&b);
    //printf("enter the operator:\n");
    //scanf("%c",&operator);
    switch(operator)
    {
        case '+':
        sum=a+b;
        printf("sum=%d\n",sum);
        break;
         case '-':
         sub=a-b;
        printf("sub=%d\n",sub);
        break;
         case '*':
         mul=a*b;
        printf("mul=%d\n",mul);
        break;
        case '/':
         div=a/b;
        printf("div=%d\n",div);
        break;
        default:
        printf("enter a valid operator\n");
    }
}