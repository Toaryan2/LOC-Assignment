#include <stdio.h>

int main() 


{
  
  int length,i;
    int arr1[100];
    int arr2[100];






printf("how many elements you wish to copy");
   scanf("%d",&length);
   

printf("Enter the elements of first array:-\n");
    for(i=0; i<length; i++)
    {
       
            scanf("%d", &arr1[i]);
            
     }





    for (int i = 0; i < length; i++) {
        arr2[i] = arr1[i];
    }

    printf("Elements of arr2: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
