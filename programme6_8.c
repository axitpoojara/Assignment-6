/*8. Write a program to check whether a given number is a Prime number or
not*/
#include<stdio.h>
int main() 
{
    int i,n,flag=0;
    printf(" Enter any number :");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    { 
        if(n%i==0)
           { flag=1;
            break;
           }
    }
    if (flag==1)
        printf("%d is a non prime number",n);
    else
        printf("%d is a prime number",n);
    return 0;
}
/* here we take n/2 in for loop because any number can not devided more than half of that so we will run loop 
     till half of that number. example: 25 can not be divided by greater than 12 . 
    so insted of run n times you can do same programme in n/2 times .
    so our code will become more efficient*/