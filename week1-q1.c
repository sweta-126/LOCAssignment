#include <stdio.h>
int main()
{
 int p,q,sum,sub,mult,div,mod;
 printf("Enter two number:");
 scanf("%d%d",&p,&q);
 sum=p+q;
 sub=p-q;
 mult=p*q;
 div=p/q;
 mod=p%q;
 printf("Addition is %d,subtraction is %d,multiplication is %d,division is %d and modulus is %d",sum,sub,mult,div,mod);
 return 0;


}
