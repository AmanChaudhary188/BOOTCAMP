#include<stdio.h>
#include<limits.h>

int maxDifference(int arr[],int n){
    if(n<2) return -1;

    int minElement=arr[0];
    int max_Diff=INT_MIN;

    for(int i=1;i<n;i++){
        if(arr[i]-minElement> max_Diff){
            max_Diff=arr[i]-minElement;
        }
        if(arr[i]<minElement){
            minElement=arr[i];
        }
    }
    return max_Diff;
}

int main(){
    int arr[]={2,3,10,6,4,8,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=maxDifference(arr,n);

    if(result==-1){
        printf("Not enough element.\n");
    }else{
        printf("Maximum difference: %d\n",result);
    }
    return 0;
}