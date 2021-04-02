#include <stdio.h>
int hcf(a,b);
int main()
{
    int a,b,hcf,lcm;
    printf("Enter two positive integers\n");
    scanf("%d%d",&a,&b);
    hcf=gcd(a,b);
    printf("gcd is %d",hcf);
    printf("\n lcm is %d",(a*b)/hcf);
    return 0;

}
int gcd(a,b)
{
    if(b!=0)
        return gcd(b,a%b);
    else
        return a;
}
