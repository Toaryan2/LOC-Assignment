#include <stdio.h>
int main()
{
    int a[100], i, n, j, count = 0, maxelement, maxcount = 0;
    printf("Enter array size:");
    scanf("%d", &n);
    printf("Enter array elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] == a[i])
            {
                count++;
                if (count > maxcount)
                {
                    maxelement = a[j];
                    maxcount = count;
                }
            }
        }
    }
    printf("Max occuranced element:%d,occuranc=%d times", maxelement, maxcount);

    return 0;
}