#include <stdio.h>
void main()
{
    float r, d = 0, c = 0, a = 0, p = 3.14;
    printf("Enter the radius of Circle\n");
    scanf("%f", &r);
    c = 2 * p * r;
    d = 2 * r;
    a = p * r * r;
    printf("Circumference %f \nDiameter %f \nArea %f \n", c, d, a);
}