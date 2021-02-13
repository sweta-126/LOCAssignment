#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    int i,totalwords;
    printf("Enter any string:");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='\n'||str[i]=='\t')
        {
            totalwords++;
        }
    }
    printf("\n Total no of words in the string %s is %d",str,totalwords);
    return 0;
}
