#include <stdio.h>

int main() 


{
    float s1, s2, s3;

    printf("Enter the lengths of three sides of the triangle: ");
    
    scanf("%f%f%f", &s1, &s2, &s3);

   
  
   
    if (s1 == s2 && s2 == s3)
    
    
    {
        printf("The triangle is an equilateral triangle.\n");
    } 
    
    
    else if (s1 == s2 || s2 == s3 || s1 == s3) 
    
    {
        printf("The triangle is an isosceles triangle.\n");
    } 
    
    else 
    
    {
        printf("The triangle is a scalene triangle.\n");
    }

    return 0;
}
