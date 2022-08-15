//1. Write a program to calculate sum of first N natural numbers
#include<stdio.h>
int main()
{
    int i,num, x=0;
    printf("Enter any number :");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
        x+=i;
    printf(" sum of first %d natural numbers is %d",num,x);
    return 0;
}