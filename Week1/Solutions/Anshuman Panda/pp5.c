#include<stdio.h>
void main()
{
    int x,y,z;
    pritnf("enter the angles of a triangle in degree\n");
    scanf("%d%d%d",&x,&y,&z);
    if (x+y+z==180)
    {
        if (x==y&&y==z&&z==x)
        {
            printf("it is an equilatrel triangle");

        }
        else if (x==y||y==z||z==x)
        {
         printf("it is a isosceles triangle");

        }
        else
        {
            printf("it is a scalene triangle");

        }
        
    }
    else
    {
        printf("no,it is not a triangle");
    }
}
