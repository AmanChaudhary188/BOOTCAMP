#include<stdio.h>

void oddOccurence(int arr[],int n){
    int xor=0;
    int res1=0;
    int res2=0;
    for(int i=0;i<n;i++){
        xor=xor^arr[i];
    }
   
    int rightBit=xor & -xor;
    //int rightBit=xor & ~(xor-1);

    for(int i=0;i<n;i++){
        if(arr[i]&rightBit){
            res1=res1^arr[i];
        }else{
            res2=res2^arr[i];
        }
    }
    printf("Two odd occurence elements are %d and %d",res1,res2);

}

int main(){
    int arr[]={4,2,4,5,2,3,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    oddOccurence(arr,n);
    return 0;
}