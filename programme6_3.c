//3. Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
int main()
{
    int i,x=0,num;
    printf(" Enter any number :");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
        x+=(i*2-1);
    printf(" Sum of first %d odd natural numbers is %d",num,x);
    return 0;
}
