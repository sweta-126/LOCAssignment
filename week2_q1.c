#include <stdio.h>
int main()
{
    int n,r,sum=0;
    printf("Enter a number");
    scanf("%d",&n);
    do
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }while(n!=0);
    printf("sum is %d",sum);
    return 0;

}
