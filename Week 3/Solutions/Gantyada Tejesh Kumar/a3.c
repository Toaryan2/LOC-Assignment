#include <stdio.h>

void add(int *a, int *b, int *result);

void main() {
    int a, b, result;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);
    
    add(&a, &b, &result);
    
    printf("Sum is %d", result);
    
}

void add(int *a, int *b, int *result) {
    *result = *a + *b;
}
