#include <stdio.h>

void main() {
    int rows = 5;
    int i, j;

    for (i = 1; i <= rows; i++) {
        for (j = rows; j >= i; j--) {
            printf("* ");
        }
        printf("\n");
    }

}