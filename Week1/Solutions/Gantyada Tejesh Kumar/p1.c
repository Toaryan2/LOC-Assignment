#include <stdio.h>
void main()
{
    int a;
    printf("Please Enter the Year\n");
    scanf("%d", &a);
    if (a % 400 == 0)
    {
        printf("%d is a Leap Year\n", a);
    }
    else if (a % 100 == 0)
    {
        printf("%d is not a Leap Year\n", a);
    }
    else if (a % 4 == 0)
    {
        printf("%d is a Leap Year\n", a);
    }
    else
    {
        printf("%d is not a Leap Year\n", a);
    }
}
