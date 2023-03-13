#include<stdio.h>
int main(){
    int a; float diameter, circumference, area;
    printf("Enter the radius of the circle: ");
    scanf("%d", &a);
    diameter=2*a;
    circumference=2*3.14*a;
    area=3.14*a*a;
    printf("Diameter=%.2f \n", diameter);
    printf("Circumference=%.2f \n", circumference);
    printf("Area=%.2f \n", area); 
    return 0 ;
    } 