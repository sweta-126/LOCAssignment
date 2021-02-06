#include <stdio.h>
int main()
{
    float c,f;
    printf("Enter temperature in Celsius:");
    scanf("%f",&c);
    f=(1.8*c)+32;
    printf("Temperature in Fahrenheit is %f",f);
    return 0;

}
