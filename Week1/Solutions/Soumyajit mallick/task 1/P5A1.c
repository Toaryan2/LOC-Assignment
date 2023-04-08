#include<stdio.h>

int main()
{
     int l1,l2,l3;
     printf("Enter three sides :\n");
     scanf("%d%d%d",&l1,&l2,&l3);
     if(l1==l2&&l2==l3)
     {
        printf("Tringle is equilateral tringle");
     }
     else if(l1==l2||l2==l3||l3==l1)
     {
        printf("It is isosceles tringle");
     }
     
     
     else{
        printf("It is a scalene tringle");
     }


    return 0;
}