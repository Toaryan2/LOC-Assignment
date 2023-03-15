#include <stdio.h>

int main()
{
    int r, d;
    float pi, c, a;

    printf("Enter radius :");
    scanf("%d", &r);
    pi = 3.14;
     d = 2 * r;
    c = 2 * pi * r;
    a = pi * r * r;
    printf("\n%d", d);
    printf("\n%f", c);
    printf("\n%f", a);
    return 0;
}
