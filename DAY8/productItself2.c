#include <stdio.h>
#include <stdlib.h>

void productExceptSelf(int nums[], int n, int answer[]) {
    int left[n];
    int right[n];

    left[0] = 1;
    right[n - 1] = 1;

    for (int i = 1; i < n; i++) {
        left[i] = nums[i - 1] * left[i - 1];
    }

    for (int i = n - 2; i >= 0; i--) {
        right[i] = nums[i + 1] * right[i + 1];
    }

    for (int i = 0; i < n; i++) {
        answer[i] = left[i] * right[i];
    }

}

int main() {
    int nums[] = {1, 2, 3, 4};
    int n = sizeof(nums) / sizeof(nums[0]);
    int answer[n];

    productExceptSelf(nums, n, answer);

    printf("Product of array except self: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", answer[i]);
    }
    printf("\n");

    return 0;
}