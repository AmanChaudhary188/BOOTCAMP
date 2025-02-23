#include <stdio.h>

int findEquilibrium(int arr[], int n) {
    int totalSum = 0, leftSum = 0;

    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    for (int i = 0; i < n; i++) {
        totalSum -= arr[i]; 

        if (leftSum == totalSum) {
            return i; 
        }

        leftSum += arr[i];  
    }
    
    return -1; 
}

int main() {
    int arr[] = {1, 3, 5, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int equilibriumIndex = findEquilibrium(arr, n);
    
    if (equilibriumIndex == -1) {
        printf("No Equilibrium Index Found\n");
    } else {
        printf("Equilibrium Index Found at %d\n", equilibriumIndex);
    }

    return 0;
}
