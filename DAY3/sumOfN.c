#include<stdio.h>

int sum(int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+i;
    }
    return sum;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("The sum upto %d is : %d",n,sum(n));
    return 0;
}