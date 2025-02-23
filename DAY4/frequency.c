#include<stdio.h>

void frequency(int arr[],int n){
    int count=1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
            count++;
        }else{
            printf("%d element is present %d time \n",arr[i-1],count);
            count=1;
        }
    }
    printf("%d is present %d times\n",arr[n-1],count);
}

int main(){
    int arr[]={1,1,2,3,4,4,4,5,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    frequency(arr,n);
    return 0;
}