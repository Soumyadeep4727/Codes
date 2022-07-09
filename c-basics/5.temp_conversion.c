#include<stdio.h>
int main()
{
    float c,f,F,C;
    printf("Enter the tempertature in Celsius:");
    scanf("%f",&c);
    F = ((c*9)/5)+32;
    printf("The corresponding fahrenheit temperature:%f ",F);
    printf("\nEnter the temperature in fahrenheit:");
    scanf("%f",&f);
    C = ((f-32)*5)/9;
    printf("The corresponding celsius temperature:%f ",C);
    return 0;
}