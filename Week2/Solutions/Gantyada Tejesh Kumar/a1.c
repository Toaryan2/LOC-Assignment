#include <stdio.h>

int countocc(int arr[], int n, int x);

void main()
{
    int arr[100], n, x, c;
    printf("Enter the number of elements in the Array\n");
    scanf("%d", &n);
    printf("Enter the %d elements\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number you want to check the Occurence\n");
    scanf("%d", &x);
    c = countocc(arr, n, x);
    printf("%d occured %d times", x, c);
}

int countocc(int arr[], int n, int x)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (x == arr[i])
        {
            c++;
        }
    }
    return c;
}