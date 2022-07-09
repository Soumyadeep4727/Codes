#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2,d,s;
    printf("Enter the coordinates of the 1st point:");
    scanf("%f %f",&x1,&y1);
    printf("Enter the coordinates of the 2nd point:");
    scanf("%f %f",&x2,&y2);
    d = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    s = (y2-y1)/(x2-x1);
    printf("\nThe distance between the two points:%f ",d);
    printf("\nThe slope between them:%f ",s);
    return 0;
}