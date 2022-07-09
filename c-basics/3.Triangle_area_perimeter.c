#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,Peri,Area; 
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f",&a,&b,&c);
    Peri = a+b+c;
    s = Peri/2;
    Area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\nThe perimeter is:%f ", Peri);
    printf("\nThe area is:%f ", Area);
    return 0;
}