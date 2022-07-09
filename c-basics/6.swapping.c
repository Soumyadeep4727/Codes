#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers for swapping: ");
    scanf("%d %d",&a,&b);
    int swap = a;
    a = b;
    b = swap;
    printf("The numbers after the swap are:%d %d ", a,b);
}