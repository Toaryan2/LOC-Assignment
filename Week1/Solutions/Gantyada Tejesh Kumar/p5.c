#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter angles of a Triangle in degrees\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b + c == 180)
    {
        if (a == b && b == c && c == a)
        {
            printf("It is a Equilatral Triangle");
        }
        else if (a == b || b == c || c == a)
        {
            printf("It is a Isosceles Triangle");
        }
        else
        {
            printf("It is a Scalene Triangle");
        }
    }
    else
    {
        printf("No, Its is not a Triangle");
    }
}