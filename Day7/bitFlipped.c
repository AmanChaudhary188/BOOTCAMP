#include<stdio.h>

int countBit(int n){
    int count=0;
    while(n){
        count=count+(n&1);
        n=n>>1;
    }
    return count;
    
}

int bitDifference(int a, int b){
    return countBit(a^b);
}

int main(){
    int a,b;
    printf("Enter the two numbers: ");
    scanf("%d %d",&a,&b);
    printf("The number of bits to be flipped to convert %d to %d is: %d",a,b,bitDifference(a,b));
    return 0;
}