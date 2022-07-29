#include<stdio.h>

int main()
{
    int a;
    printf("Enter the year:");
    scanf("%d", &a);
    if(a%4 != 0) 
        printf("The year is not a leap year.");
    else
    {
        if((a%100==0)&&(a%400!=0))
            printf("It is not a leap year.\n");
        else
            printf("It is a leap year.\n");
    }   
}