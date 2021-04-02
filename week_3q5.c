#include <stdio.h>
int main()
{
    int num,reverse=0,c,m;
    printf("enter a no:");
    scanf("%d",&num);
    m=num;
    while(m!=0)
    {
        c=m%10;
        reverse=reverse*10+c;
        m/=10;
    }
    if(reverse==num)
        printf("%d is a palindrome no",num);
    else
        printf("%d is not a palindrome no",num);
    return 0;
}
