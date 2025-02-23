#include <stdio.h>

void rearrange(int arr[], int n) {
    int temp[n];
    int posIndex = 0, negIndex = 1;

    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0 && posIndex < n) {
            temp[posIndex] = arr[i];
            posIndex += 2;
        } else if (arr[i] < 0 && negIndex < n) {
            temp[negIndex] = arr[i];
            negIndex += 2;
        }
    }

    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, -4, -1, 4, -2, -3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    rearrange(arr, n);

    printf("Rearranged array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}