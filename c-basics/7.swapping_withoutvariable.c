#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the values to be swapped: ");
    scanf("%d %d",&a,&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("The swapped values are:%d %d",a,b);
    return 0;
}