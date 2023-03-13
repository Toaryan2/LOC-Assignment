#include <stdio.h>

int main() 


{
    float n1, n2;
   
    printf("Enter two numbers: ");
    scanf("%f%f", &n1, &n2);

    
    switch(1) {
        case 1 :
            printf("%.2f + %.2f = %.2f\n", n1, n2, n1 + n2);
            
        case 2 :
            printf("%.2f - %.2f = %.2f\n", n1, n2, n1 - n2);
            
        case 3 :
            printf("%.2f * %.2f = %.2f\n", n1, n2, n1 * n2);
            
        case 4 :
            if(n2 == 0) {
                printf("Error: Cannot divide by zero.\n");
            }
            else {
                printf("%.2f / %.2f = %.2f\n", n1, n2, n1 / n2);
            }
            break;
        default:
            printf("Enter valid input\n");
    }

    return 0;
}
