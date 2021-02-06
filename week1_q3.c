#include <stdio.h>
int main()
{
    float r,d,c,a;
    printf("Enter the radius:");
    scanf("%f",&r);
    d=2*r;
    c=2*3.14*r;
    a=3.14*r*r;
    printf("\nDiameter of circle is %f",d);
    printf("\nCircumcenter of circle is %f",c);
     printf("\nArea of circle is %f",a);
     return 0;
}
