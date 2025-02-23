#include<stdio.h>

//brian kernighan's algorithm

int checkSetBits(int n){
    int count=0;
    while(n){
        n=n&(n-1);
        count++;
    }
    return count;
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Number of set bits in %d is %d\n",n,checkSetBits(n));
    return 0;
}