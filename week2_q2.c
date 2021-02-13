#include <stdio.h>
int main()
{
    int n,summation=0,sum=0;
    printf("Enter the no of elements of the array\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the element at position %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
    {
        if((i+1)%2==0)
        {
            summation+=arr[i];
        }
        if(arr[i]%2==0)
        {
            sum+=arr[i];
        }
    }
    printf("sum of all even position elements is %d\n",summation);
    printf("sum of all even elements is %d\n",sum);
    printf("total sum is %d",summation+sum);
    return 0;

}
