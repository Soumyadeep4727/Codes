#include<stdio.h>

int main()
{
    int a,b,n;
    printf("Enter the two numbers : ");
    scanf("%d %d",&a,&b);
    printf("Enter:\n'1' for sum \n'2' for difference, \n'3' for product \n'4' for quotient\n ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("%d\n",a+b);
            break;
        case 2:
            printf("%d\n",a-b);
            break;
        case 3:
            printf("%d\n",a*b);
            break;
        case 4:
            printf("%d\n",a/b);
            break;
        default:
            break;
   }
}