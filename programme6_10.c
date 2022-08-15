//10. Write a program to reverse a given number
#include<stdio.h>
int main()
{
    int num,temp,sum=0,x;
    printf(" Enter any number :");
    scanf("%d",&num);
    x=num;
    while(num!=0)
    {
        temp=num%10;
        sum=(sum*10)+temp;
        num=num/10;
    }
    printf(" reverse number of %d is %d",x,sum);
    return 0;
}