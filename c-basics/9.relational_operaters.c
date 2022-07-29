// use of >, <, ==, !=,
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    if(n>7)
    printf("The number is greater than 7.");
    if(n<7)
    printf("The number is less than 7.");
    if(n==7)
    printf("The number is equal to 7.");
    if(n!=7)
    printf("The number is not equal to 7.");
    return 0;
}