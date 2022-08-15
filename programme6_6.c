//6. Write a program to calculate factorial of a number
#include<stdio.h>
int main()
{
    int i,num,x=1;
    printf(" Enter any number :");
    scanf("%d",&num);
    for(i=num;i>=1;i--)
        x*=i;
    printf("%d factorial = %d",num,x);
    return 0;
    }