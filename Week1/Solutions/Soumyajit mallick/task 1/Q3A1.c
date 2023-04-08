#include<stdio.h>

int main()
{   int a,r,q,sum;
    printf("Enter a number :");
    scanf("%d",&a);
    r=a%10;
    q=a/10;
    sum=r+q;
    do
    {
       printf("%d",sum);break;
    } while (q>0);
    
    return 0;
}