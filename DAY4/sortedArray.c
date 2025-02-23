#include <stdio.h>

int isSorted(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0;
        }
    }
    return 1;
     }

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (isSorted(arr, size)) {
        printf("The array is sorted.\n");
    } else {
        printf("The array is not sorted.\n");
    }

    return 0;
}