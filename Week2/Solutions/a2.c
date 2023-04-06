#include <stdio.h>

int main() {
   int size1, size2;
   int arr1[100], arr2[100];
   int merged[200];
   int i, j, k;

   printf("Enter the size of the first array: ");
   scanf("%d", &size1);
   printf("Enter %d elements for the first array:\n", size1);
   for (i = 0; i < size1; i++) {
      scanf("%d", &arr1[i]);
   }

   printf("Enter the size of the second array: ");
   scanf("%d", &size2);
   printf("Enter %d elements for the second array:\n", size2);
   for (j = 0; j < size2; j++) {
      scanf("%d", &arr2[j]);
   }

   for (i = 0; i < size1; i++) {
      merged[i] = arr1[i];
   }
   for (j = 0; j < size2; j++) {
      merged[i+j] = arr2[j];
   }

   for (k = size1+size2-1; k >= 0; k--) {
      printf("%d ", merged[k]);
   }
   return 0;
}
