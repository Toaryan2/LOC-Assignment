#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter angles of a Triangle in degrees\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b + c == 180)
    {
        printf("Yes, It is a Triangle");
    }
    else
    {
        printf("No, Its is not a Triangle");
    }
}