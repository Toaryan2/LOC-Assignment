#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter two number");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("enter your choice");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        printf("%d\n",a+b);
        break;
    case 2:
        printf("%d\n",a-b);
        break;
    case 3:
        printf("%d\n",a*b);
        break;
        case 4:
        printf("%d\n",a/b);
        break;
    default:
        printf("invalid input");
        
    }
}