*8. Write a program to check whether a given number is a Prime number or
not*/
#include<stdio.h>
int maim() 
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=6-i)
                printf("*");
            
            else
                printf(" ");
        }
        printf("/n");
    }
    printf("\n");
    return 0;
}