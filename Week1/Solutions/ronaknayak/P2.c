#include <stdio.h>

int main() 


{
    int m1, m2, m3, m4, m5;
     
    float total, avg, percent;

    printf("Enter the marks of five subjects: ");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    average = total/5;
    percentage = 100 * total/500 ;

    printf("Total marks: %.2f\n", total);
    
    printf("Average marks: %.2f\n", avg);
    
    printf("Percentage: %.2f\n", percent);

    return 0;
}
