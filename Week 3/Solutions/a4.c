#include <stdio.h>

int factorial(int );


int main() {
    int num, fact;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    fact = factorial(num);
    
    printf("%d! = %d\n", num, fact);
    
    return 0;
}



int factorial(int n) {
    int result = 1;
    
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    
    return result;
}