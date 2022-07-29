#include<stdio.h>

int main()
{
    int a,b,c,d,e;
    printf("Enter the marks of five subjects:");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    float x = (a+b+c+d+e)/5;
    if(x>=90)
        printf("Grade O\n");
    else if(x>=80)
        printf("Grade A\n");
    else if(x>=70)
        printf("Grade B\n");
    else if(x>60)
        printf("Grade C\n");
    else if(x>=50)
        printf("Grade D\n");
    else if(x>=40)
        printf("Grade E\n");
    else
        printf("Grade F\n");
}