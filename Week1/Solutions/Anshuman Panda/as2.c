#include<stdio.h>
void main()
{
    int s;
    printf("enter a number");
    scanf("%d",&s);
    if(s>0)
    {
        printf("the number is positive",s);
    }
    else if (s<0)
    {
        printf("the number is negative",s);

    }
    else if (s==0)
    {
        printf("the number is zero",s);
    }
    else
    {
        printf("the number does not exist",s);

    }

}