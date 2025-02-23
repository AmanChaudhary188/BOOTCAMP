#include<stdio.h>

int oddOcuuring(int arr[],int n){
    int result=0;
    for(int i=0;i<n;i++){
        result=result^arr[i];
    }
    return result;
}

int main(){
    int arr[]={1,2,3,2,3,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("%d",oddOcuuring(arr,n));
    return 0;
}