#include <stdio.h>
void main()
{
    int i;
    printf("Enter a Number!\n");
    scanf("%d", &i);
    if (i > 0)
    {
        printf("%d is Positive\n", i);
    }
    else if (i < 0)
    {
        printf("%d is Negative\n", i);
    }
    else if (i == 0)
    {
        printf("%d is Zero\n");
    }
    else
    {
        printf("Invalid Input!");
    }
}