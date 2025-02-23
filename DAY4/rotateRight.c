#include <stdio.h>

void rotateArrayRight(int arr[], int d, int n) {
    int temp[d];
    
    for (int i = 0; i < d; i++) {
        temp[i] = arr[n - d + i];
    }

    for (int i = n - 1; i >= d; i--) {
        arr[i] = arr[i - d];
    }

    for (int i = 0; i < d; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d;
    printf("Enter the value of d in which you want to rotate the array to the right: ");
    scanf("%d", &d);
    
    d = d % n;

    rotateArrayRight(arr, d, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}