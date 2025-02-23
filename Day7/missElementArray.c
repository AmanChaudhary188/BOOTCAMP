#include<stdio.h>

int findMisingnumber(int arr[],int n){
    int xor=0;
    int xorAll=0;
    for(int i=0;i<n+1;i++){
       xor^=arr[i];
    }

    for(int i=0;i<n;i++){
        xorAll^=i;
    }
    return xor^xorAll;
}
int main(){
    // int arr[]={0,1,2,3,4,5,6,7,8,10};
    int arr[] = {10, 11, 12, 14, 15};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Missing number is %d",findMisingnumber(arr,n));
    return 0;
}