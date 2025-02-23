#include<stdio.h>


void productItself(int arr[],int n,int ans[]){
    int totalProduct=1;
    int countZero=0;
    
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            totalProduct=totalProduct*arr[i];
        }else{
            countZero++;
        }
    }
    
    if(countZero>1){
        for(int i=0;i<n;i++){
            ans[i]=0;
        };
    }else{
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                ans[i]=totalProduct;
            }else if (countZero == 1) {
                ans[i] = 0;
            } else {
                ans[i] = totalProduct / arr[i];
            }
        }
    }
}

int main(){
     int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans[n];
    productItself(arr,n,ans);
    printf("Product array: ");
    for(int i=0;i<n;i++){
        printf("%d ",ans[i]);
    }
    return 0;
}