#include <stdio.h>

int findPeakElement(int arr[], int low, int high, int n) {
    int mid = low + (high - low) / 2;

    if ((mid == 0 || arr[mid] >= arr[mid - 1]) && 
        (mid == n - 1 || arr[mid] >= arr[mid + 1])) {
        return mid;
    }

    if (mid > 0 && arr[mid - 1] > arr[mid]) {
        return findPeakElement(arr, low, mid - 1, n);
    }
    return findPeakElement(arr, mid + 1, high, n);
}

int peakElement(int arr[], int n) {
    return findPeakElement(arr, 0, n - 1, n);
}

int main() {
    int arr[] = {1, 3, 20, 4, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int peakIndex = peakElement(arr, n);
    printf("Peak element is at index %d with value %d\n", peakIndex, arr[peakIndex]);
    return 0;
}