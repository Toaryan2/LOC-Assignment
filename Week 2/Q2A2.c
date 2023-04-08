#include <stdio.h>

int main()
{
    int a[2], i;
    printf("Enter two array as input :");
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Merged number is :%d\n", a[0] * 10 + a[1]);
    printf("Reversed array is:");
    for (int i = 1; i >= 0; i--)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}