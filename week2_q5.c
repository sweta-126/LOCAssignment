#include<stdio.h>
int main()
{
    int r,c,n=5;
    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
            if(r==c || c==(n-r-1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");

    }
    return 0;



}
