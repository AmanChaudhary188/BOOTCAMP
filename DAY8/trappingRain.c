#include <stdio.h>


int maxWater(int arr[], int n) {
    int res = 0;

    for (int i = 1; i < n - 1; i++) {

        int left = arr[i];
        for (int j = 0; j < i; j++)
            if (arr[j] > left)
                left = arr[j];

        int right = arr[i];
        for (int j = i + 1; j < n; j++)
            if (arr[j] > right)
                right = arr[j];

        res += (left < right ? left : right) - arr[i];
    }

    return res;
}

int main() {
    int arr[] = { 2, 1, 5, 3, 1, 0, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d", maxWater(arr, n));
    return 0;
}