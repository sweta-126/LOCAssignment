#include <stdio.h>
int factorial(int);
int main()
{
    int num;
    int a;
    printf("Enter a no:");
    scanf("%d",&num);
    if(num<0)
    {
        printf("factorial of negative no is not possible\n");

    }
    else
    {
        a=factorial(num);
        printf("the factorial of %d is %d",num,a);
    }
    return 0;

}
int factorial(int num)
{
    if(num==0 || num==1)
    {
        return 1;
    }
    else
    {
        return(num*factorial(num-1));
    }
}
