#include <stdio.h>

int main()
{
    int m1, m2, m3, m4, m5;
    int total;
    float average, percentage;
    printf("Enter five marks:\n");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);
    total = m1 + m2 + m3 +
            m4 + m5;
    average = (m1 + m2 + m3 + m4 + m5) / 5;
    percentage = ((m1 + m2 + m3 + m4 + m5) / 500) * 100;
    printf("total marks=%d\n", total);
    printf("average marks=%f\n", average);
    printf("percentage mark=%f\n", percentage);

    return 0;
}