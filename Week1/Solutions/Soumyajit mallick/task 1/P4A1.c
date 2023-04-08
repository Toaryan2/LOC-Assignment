#include <stdio.h>

int main()
{
    int a1, a2, a3, x;
    printf("Input three angles:\n");
    scanf("%d%d%d", &a1, &a2, &a3);
    x = a1 + a2 + a3;

    if (x == 180)
    {
        printf("Tringle is valid.");
    }
    else
    {
        printf("It is invalid.");
    }
    return 0;
}