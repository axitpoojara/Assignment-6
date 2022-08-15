//5. Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>
int main()
{
    int i,x=0,num;
    printf("Enter any number :");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
        x+=(i*i*i);
    printf(" Sum of cubes of first %d natural numbers is %d",num,x);
    return 0;
}