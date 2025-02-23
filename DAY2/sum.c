#include<stdio.h>

int main(){
    int n;
    int sum=0;
    printf("Enter a num: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        sum +=i;
    }
    printf("The sum upto %d is: %d",n,sum);
    return 0;
}