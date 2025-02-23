#include <stdio.h>

void rotateArray(int arr[],int d,int n){
    int temp[d];
    
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }

    for(int i=0;i<n-d;i++){
        arr[i]=arr[i+d];
    }
    for(int i=0;i<d;i++){
        arr[n-d+i]=temp[i];
    }
    
}


int main() {
   int arr[]={1,2,3,4,5,6,7};
   int n=sizeof(arr)/sizeof(arr[0]);
   int d;
   printf("Enter the value of d in which you want to roate an element:" );
   scanf("%d",&d);
   
   rotateArray(arr,d,n);
   printf("Array after rotating by left: \n");
   for(int i=0;i<n;i++){
       printf("%d ",arr[i]);
   }

    return 0;
}