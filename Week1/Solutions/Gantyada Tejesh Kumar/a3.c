#include <stdio.h>
void main()
{
    int i, sum = 0;
    printf("Enter a Number!\n");
    scanf("%d", &i);
    do
    {
        sum += i % 10;
        i /= 10;
    } while (i > 0);
    printf("The sum of the digits is %d", sum);
}
