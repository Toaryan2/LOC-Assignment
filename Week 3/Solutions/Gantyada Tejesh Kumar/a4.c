#include <stdio.h>

void factorial(int n, int *f);

void main() {
    int n, f;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    factorial(n, &f);
    
    printf("Factorial of %d is %d", n, f);
    
}

void factorial(int n, int *f) {
    int i;
    *f = 1;
    
    for (i = 1; i <= n; i++) {
        *f *= i;
    }
}
