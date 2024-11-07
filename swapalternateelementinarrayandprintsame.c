#include <stdio.h>

void swapnumber(int arr[], int size) {
    for (int i = 0; i < size - 1; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    swapnumber(arr, size);

    printf("\nSwapped array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}