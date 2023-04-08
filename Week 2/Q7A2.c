#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void moveNegative(int arr[], int size) {
    int i = 0;
    int j = size - 1;
    
    while (i <= j) {
        if (arr[i] < 0 && arr[j] >= 0) {
            swap(&arr[i], &arr[j]);
            i++;
            j--;
        } else if (arr[i] >= 0) {
            i++;
        } else if (arr[j] < 0) {
            j--;
        }
    }
}

int main() {
    int arr[] = {-2, 4, 6, -8, 10, -12};
    int size = sizeof(arr)/sizeof(arr[0]);

    moveNegative(arr, size);

    printf("Resulting array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
