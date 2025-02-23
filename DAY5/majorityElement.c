#include <stdio.h>

int findMajorityElement(int arr[], int n) {
    int candidate = -1;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }

    if (count > n / 2) {
        return candidate;
    } else {
        return -1; 
    }
}

int main() {
    int arr[10];
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<n;i++){
        printf("Enter an element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int majorityElement = findMajorityElement(arr, n);

    if (majorityElement != -1) {
        printf("The majority element is %d\n", majorityElement);
    } else {
        printf("There is no majority element in the array.\n");
    }

    return 0;
}