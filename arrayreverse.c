#include <stdio.h>

void main() {
    int arr[1000];
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter an array: ");
    for (int i = 0; i< n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Reversed array: ");
    for (int i = n-1; i>=0; i--){
        printf("%d ", arr[i]);
    }
}