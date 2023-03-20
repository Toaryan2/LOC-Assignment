#include <stdio.h>

int main() 

{
    float n;

    printf("Enter a number: ");
    scanf("%f", &n);

    if(n > 0) 
    
    {
        printf("%.2f is a positive number.\n", n);
    }
    
    else if(n < 0) 
    
    {
        printf("%.2f is a negative number.\n", n);
    }
    
    else 
    
    {
        printf("The number is zero.\n");
    }

    return 0;
}
