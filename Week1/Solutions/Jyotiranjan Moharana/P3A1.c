#include <stdio.h>

int main()
{
    float l;
    float meter, kilometer;
    printf("Enter length in cm :");
    scanf("%f", &l);
    meter = l / 100;
    kilometer = l / 1000;
    printf("Length in meter=%f\n", meter);
    printf("Length in kilometer=%f\n", kilometer);

    return 0;
}