#include<stdio.h>
void main()
{
int d,sum=0;
printf("enter a number\n");
scanf("%d",&d);
do
{
    sum= sum+ d %10;
    d=d/10;
    /* code */
} while (d>0/* condition */);
printf("the sum of the digits is %d",sum);
}