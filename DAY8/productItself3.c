#include <stdio.h>
#include <stdlib.h>

void productExceptSelf(int nums[], int n, int answer[]) {
    answer[0] = 1;
    for (int i = 1; i < n; i++) {
        answer[i] = nums[i - 1] * answer[i - 1];
    }

    int suffixProduct = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] = answer[i] * suffixProduct;
        suffixProduct *= nums[i];
    }
}

int main() {
    int nums[] = {1, 2, 3, 4};
    int n = sizeof(nums) / sizeof(nums[0]);
    int *answer = (int *)malloc(n * sizeof(int));

    productExceptSelf(nums, n, answer);

    printf("Product of array except self: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", answer[i]);
    }
    printf("\n");

    free(answer);
    return 0;
}