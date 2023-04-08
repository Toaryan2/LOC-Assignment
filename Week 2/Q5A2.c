#include <stdio.h>
int main()
{
    int a1[100], a2[100], i, n;
    printf("Enter size of array:");
    scanf("%d", &n);
    printf("Enter array elments:");
    for (i = 0; i < n; i++)
    {
        scanf("%d\n", &a1[i]);
    }
    printf("Copy of the array:");
    for (i = 0; i < n; i++)
    {
        a2[i] = a1[i];
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a2[i]);
    }
    return 0;
}