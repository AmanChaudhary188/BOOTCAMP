#include<stdio.h>

void moveZero(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j++;
        }
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[]={1,2,0,0,0,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    printf("Original Array: \n");
   printArray(arr,n);

    moveZero(arr,n);
    printf("Printing Array after move all zeroes at the end: \n");
     printArray(arr,n);
     
    return 0;
    
}