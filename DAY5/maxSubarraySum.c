#include<stdio.h>

void findSubArraySum(int arr[],int n,int target){
    int start=0,currSum=0;

    for(int i=0;i<n;i++){
        currSum=currSum+arr[i];
        while(currSum>target && start<n){
            currSum -= arr[start];
            start++;
        }
        if (currSum == target) {
            printf("Subarray with the given sum found from index %d to %d\n", start, i);
            return;
        }
    }
    printf("No subarray with the given sum found.\n");
}

int main() {
    int arr[] = {1, 4, 20, 3, 10, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int targetSum = 33;

    findSubArraySum(arr, size, targetSum);

    return 0;
}