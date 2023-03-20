#include<stdio.h>
void main()
{
    int y;
    printf("enter the year\n");
    scanf("%d",&y);
    if(y%400==0)
    {
        printf("the year is leap year\n %d",y);
    
    }
    else if (y%100==0)
    {
        printf("the year is not a leap year\n %d",y);
    }
    else if(y%4==0)
    {
        printf(" leap year\n %d",y);
    
    }
    else
    {
        printf("not a leap year\n %d",y);
        
    }
}