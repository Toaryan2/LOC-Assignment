#include <stdio.h>
int main()
{
    int a[5], i, j, c;
    printf("Enter array elements:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }
    printf("Array elements in ascending order:");
    for (i = 0; i < 5; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}