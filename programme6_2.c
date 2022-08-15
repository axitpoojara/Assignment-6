//2. Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
int main()
{
    int i,x=0,num;
    printf(" Enter any number :");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
        {
           x+=(i*2);
        }
    printf("sum of first %d even natural numbers is %d",num,x);
    return 0;
}