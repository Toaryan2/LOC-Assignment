#include <stdio.h>

int main()

 {
    float cm, m, km;

    printf("Enter length in centimeters: ");
    scanf("%f", &cm);

    m = cm*0.01 ;
    km = cm* 0.00001;

    printf("Length in meters: %.2f m\n", m);
    
    printf("Length in kilometers: %.5lf km\n", km);

    return 0;
}
