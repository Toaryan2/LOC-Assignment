#include <stdio.h>

int main() 

{
    int n, a, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    do 
    
    {
        a = n%10;
        sum = sum + a;
        n = n/10;
    } 
    
  while(n!= 0);

    printf("The sum of digits is %d.", sum);

    return 0;
}
