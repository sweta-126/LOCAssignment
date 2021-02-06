#include <stdio.h>
int main()
{
    float phy,chem,bio,math,comp,per;
    printf("Enter all subject marks:");
    scanf("%f%f%f%f%f",&phy,&chem,&bio,&math,&comp);
    per=(phy+chem+bio+math+comp)*100/500;
    printf("the percentage is %.2f\n",per);
    if(per>=90)
        printf("Grade A");
    else if(per>=80)
        printf("Grade B");

    else if(per>=70)
        printf("Grade C");

     else if(per>=60)
        printf("Grade D");

     else if(per>=40)
        printf("Grade E");

     else
        printf("Grade F");

     return 0;


}
