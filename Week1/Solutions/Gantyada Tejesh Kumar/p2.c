#include <stdio.h>
void main()
{
    float f, m, p, c, e, h, i, j, k;
    printf("Enter Full marks of a Subject\n");
    scanf("%f", &f);
    printf("Enter your marks secured in Mathematics\n");
    scanf("%f", &m);
    printf("Enter your marks secured in Physics\n");
    scanf("%f", &p);
    printf("Enter your marks secured in Chemistry\n");
    scanf("%f", &c);
    printf("Enter your marks secured in English\n");
    scanf("%f", &e);
    printf("Enter your marks secured in Hindi\n");
    scanf("%f", &h);
    i = m + p + c + e + h;
    j = (m + p + c + e + h) / 5;
    k = (m + p + c + e + h) * 100 / (f * 5);
    printf("Your Total marks is %.2f \nAverage is %.2f \nPercentage is %.2f", i, j, k);
}