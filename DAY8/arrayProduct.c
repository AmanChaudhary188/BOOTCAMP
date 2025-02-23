#include <stdio.h>
#include <stdlib.h>

void productExceptSelf(int nums[], int n, int answer[]) {
    for (int i = 0; i < n; i++) {
        int product = 1;
        for (int j = 0; j < n; j++) {
            if (i != j) {
                product *= nums[j];
            }
        }
        answer[i] = product;
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