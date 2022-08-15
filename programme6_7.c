//7. Write a program to count digits in a given number
#include<stdio.h>
int main()
{
    int x,num,temp=0;
    printf(" Enter any number :");
    scanf("%d",&num);
    x=num;
    while(num!=0)
    {
        temp++;
        num/=10;
    }
    printf("there are %d digit in %d",temp,x);
    return 0;
}