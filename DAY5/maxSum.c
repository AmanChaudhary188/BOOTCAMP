#include<stdio.h>

int maxSum(int arr[],int n){
    int maxSum=arr[0];
    
    for(int i=0;i<n;i++){
        int currSum=0;
        for(int j=i;j<n;j++){
            currSum=currSum+arr[i];

            if(currSum>maxSum){
                maxSum=currSum;
            }
        }
    }
    return maxSum;
}

int main(){
    int arr[]={2,3,5,6,-8,9,-1};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("%d ",maxSum(arr,n));
    return 0;
}
