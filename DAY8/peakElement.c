#include<stdio.h>

int peakElement(int arr[],int n){
    if(n==1){
        return 1;
    }
    //first
    if(arr[0]>=arr[1]){
        return arr[0];
    }
    
    //last
    if(arr[n-1]>=arr[n-2]){
        return arr[n-1];
    }
    //mid
    for(int i=1;i<n-1;i++){
        if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1]){
            return arr[i];
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 20, 4, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int peak = peakElement(arr, n);
    printf("A peak element is %d\n", peak);

    return 0;
}