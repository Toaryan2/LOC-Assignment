#include <stdio.h>

void main() {
  int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arr2[10];

  for (int i = 0; i < 10; i++) {
    arr2[i] = arr1[i];
  }

  printf("Elements of arr2: ");
  for (int i = 0; i < 10; i++) {
    printf("%d ", arr2[i]);
  }

}
