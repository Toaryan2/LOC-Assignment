#include<stdio.h>
int main()
{
    int a;
    for(a=1;a<=100;a++)
    {
        if(a%3==0)
        {
            printf("fizz\n"); 
        }
        else if(a%5==0)
        {
            printf("buzz\n");
        }
        else
        {
            printf("%d\n",a);
        }
    }
}