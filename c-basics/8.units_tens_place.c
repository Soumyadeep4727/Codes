#include<stdio.h>
int main()
{
    int n,u,t;
    printf("Enter a number: ");
    scanf("%d", &n);
    u = n%10;
    t = (n%100)/10;
    printf("The unit's place of the given number is:%d", u);
    printf("\nThe ten's place of the given number is:%d", t);
    return 0; 
}