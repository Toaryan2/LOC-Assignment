#include <stdio.h>

void decToBin(int num);

int main()
{
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    decToBin(num);
    return 0;
}

void decToBin(int num)
{
    int binary = 0;
    int place = 1;
    while (num > 0) 
    {
        binary =binary+ (num % 2) * place;
        num=num/ 2;
        place = place*10;
    }
    printf("The binary equivalent is %d\n", binary);
}
