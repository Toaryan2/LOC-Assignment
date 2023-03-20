#include <stdio.h>

int main() 


{
    int ang1, ang2, ang3;
    int sum;

    printf("Enter the three angles of the triangle: ");
    scanf("%d%d%d", &ang1, &ang2, &ang3);

    sum = ang1 + ang2 + ang3;

    if (sum == 180 ) 
    
    {
        printf("The triangle is valid.\n");
    } 
    
    else 
    
    {
        printf("The triangle is not valid.\n");
    }

    return 0;
}
