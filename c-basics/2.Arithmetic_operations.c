/* print the sum, difference, product, quotient and remainder of two user input numbers */

#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    printf("The sum is %d.\n", a+b);
    printf("The difference is %d.\n", a-b);
    printf("The product is %d.\n", a*b);
    printf("The quotient is %d.\n", a/b)
    printf("The remainder is %d.\n", a%b);
}