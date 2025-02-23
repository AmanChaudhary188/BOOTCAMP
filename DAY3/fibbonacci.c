#include<stdio.h>

int fibbonacci(int n){
   if(n==0) return 0;
   if(n==1) return 1;
   return fibbonacci(n-1)+fibbonacci(n-2);
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
   
   printf("Fibbonacci series: \n");
   for(int i=0;i<n;i++){
    printf("%d ",fibbonacci(i));
   }
   printf("\n");
    return 0;
}