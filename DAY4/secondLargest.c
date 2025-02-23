#include<stdio.h>

int secondLargestElement(int arr[],int n){
    if(n<2){
        printf("Array must contain two elements in it: ");
    }
    int first=arr[0],second=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
        }else if(arr[i]>second && arr[i]!=first){
            second=arr[i];
        }
    }
    return second;
}
int main(){
    int arr[10]={1,2,3,4,56,78,98,7,6,45};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int secondLargest=secondLargestElement(arr,n);
    if(secondLargest != -1){
         printf("The second largest element is %d\n", secondLargest);
    }
    return 0;
}