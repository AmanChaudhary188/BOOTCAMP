#include <stdio.h>

int findMaxConsecutiveOnes(int arr[], int n) {
    int max_count = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            count++;
            if (count > max_count) {
                max_count = count;
            }
        } else {
             count = 0;
        }
    }
    return max_count;
}

int main() {
    int arr[10];
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        printf("Enter value for element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Maximum number of consecutive 1's are %d\n", findMaxConsecutiveOnes(arr, n));

    return 0;
}