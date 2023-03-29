#include<stdio.h>
void main(){
    int arr1[100], arr2[100], size1, size2, i, j, merge[200];
    printf("Enter Array 1 Size: ");
    scanf("%d", &size1);
    printf("Enter Array 1 Elements: ");
    for(i=0; i<size1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("\nEnter Array 2 Size: ");
    scanf("%d", &size2);
    printf("Enter Array 2 Elements: ");
    for(i=0; i<size2; i++)
    {
        scanf("%d", &arr2[i]);
    }
  for (i = 0; i < size1; i++) {
    merge[i] = arr1[i];
  }
  for (j = 0; j < size2; j++) {
    merge[i+j] = arr2[j];
  }

  
  printf("Merged array in reverse order: ");
  for (int k = size1 + size2 - 1; k >= 0; k--) {
    printf("%d ", merge[k]);
  }
}