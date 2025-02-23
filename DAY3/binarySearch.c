#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

//Using recursion
// int binarySearch(int arr[], int left, int right, int target) {
//     if (left <= right) {
//         int mid = left + (right - left) / 2;

//         if (arr[mid] == target) {
//             return mid;
//         }

//         if (arr[mid] < target) {
//             return binarySearch(arr, mid + 1, right, target);
//         }
//         return binarySearch(arr, left, mid - 1, target);
//     }
//     return -1;
// }

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter an element for searching: ");
    scanf("%d",&target);
    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("Element is present at index %d\n", result);
    } else {
        printf("Element is not present in array\n");
    }
    return 0;
}

