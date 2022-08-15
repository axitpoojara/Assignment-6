//4. Write a program to calculate sum of squares of first N natural numbers
#include<stdio.h>
int main()
{
    int i,x=0,num;
    printf(" Enter any number :");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
        x+=(i*i);
    printf(" Sum of squares of first %d natural numbers is %d",num,x);
    return 0;
}