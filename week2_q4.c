#include <stdio.h>
int main()
{
    int arr[50],n,largest,smallest,i;
    printf("number of elements:");
    scanf("%d",&n);
    printf("enter array");
    for(i=0;i<n;++i)
        scanf("%d",&arr[i]);
    largest=smallest=arr[0];
    for(i=1;i<n;++i)
    {
        if(arr[i]>largest)
            largest=arr[i];
        if(arr[i]<smallest)
            smallest=arr[i];
    }
    printf("the largest element is %d\n",largest);
    printf("the smallest element is %d",smallest);

}
