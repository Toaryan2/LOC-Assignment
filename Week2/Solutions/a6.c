#include <stdio.h>

int main()
{
   int arr[100], freq[100];
   int n, i, j, max, count;
   scanf("%d", &n);

   for (i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
      freq[i] = -1;
   }

   for (i = 0; i < n; i++) {
      count = 1;
      for (j = i + 1; j < n; j++) {
         if (arr[i] == arr[j]) {
            count++;
            freq[j] = 0;
         }
      }
      if (freq[i] != 0) {
         freq[i] = count;
      }
   }

   max = freq[0];
   for (i = 0; i < n; i++) {
      if (freq[i] > max) {
         max = freq[i];
      }
   }

   for (i = 0; i < n; i++) {
      if (freq[i] == max) {
         printf("%d", arr[i]);
         break;
      }
   }

   return 0;
}
