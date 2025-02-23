#include<stdio.h>

int digitSum(int n){
    int sum=0;
    int remainder;
    while(n!=0){
        remainder=n%10;
        sum=sum+remainder;
        n=n/10;
    }
    return sum;
}

int digitCount(int n){
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    return count;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("The sum of digits is : %d\n",digitSum(n));
    printf("The number of digit is : %d",digitCount(n));
    return 0;
}