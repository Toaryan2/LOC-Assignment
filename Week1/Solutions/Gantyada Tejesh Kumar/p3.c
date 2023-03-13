#include <stdio.h>
void main()
{
    float a;
    printf("Enter Length in Centimeters\n");
    scanf("%f", &a);
    printf("%fkm is length in Kilometers", a / 100000);
}