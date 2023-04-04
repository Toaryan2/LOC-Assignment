#include <stdio.h>

void main() {
    int rows = 5, i, j, count = 1;
    
    for (i = 0; i <= rows; i++) {
        for (j = 0; j < i; j++) {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }
    
  }
