#include <stdio.h>
int factorial(int);
void main()
{
    int a,b;
    printf("Enter a no:");
    scanf("%d",&a);
    b=factorial(a);
    printf("\n factorial of the no %d = %d",a,b);
    scanf("%d%d",&a,&b);
}
int factorial(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
