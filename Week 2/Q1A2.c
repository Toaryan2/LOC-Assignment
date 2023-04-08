#include <stdio.h>

int main()
{
    int a[7], b, count = 0;
    printf("Enter aray numbers: ");
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter an array element from the above: ");
    scanf("%d", &b);
    for (int i = 0; i < 7; i++)
    {
        if (a[i] == b)
        {
            count++;
        }
    }
    printf("The occurence of %d is %d", b, count);
    return 0;
}