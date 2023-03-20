#include<stdio.h>
void main()
    {
        int a,b,c;
        printf("enter the angles of a trianglein degrees\n");
        scanf("%d%d%d",&a,&b,&c);
        if (a+b+c==180)
        {
            printf("yes,it is a triangle");

        }
        else{
            printf("no,it is not a triangle");
            
        }

    }