#include <stdio.h>

int findMissingNumber(int arr[], int n) {
    int min = arr[0];
    int max = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    int total = (max * (max + 1) / 2) - ((min - 1) * min / 2);
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return total - sum;
}

int main() {
    int arr[] = {10, 11, 12, 14, 15}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    int missingNumber = findMissingNumber(arr, n);
    printf("The missing number is %d\n", missingNumber);

    return 0;
}