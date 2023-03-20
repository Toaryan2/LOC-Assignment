#include <stdio.h>
void main()
{
    int i, j, a;
    printf("Enter two Numbers!\n");
    scanf("%d %d", &i, &j);
    printf("for Addition type 1\nfor Substraction type 2\nfor Multiplication type 3\nfor Quotient type 4\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("%d\n", i + j);
        break;
    case 2:
        printf("%d\n", i - j);
        break;
    case 3:
        printf("%d\n", i * j);
        break;
    case 4:
        printf("%d\n", i / j);
        break;
    default:
        printf("Invalid Input");
    }
}