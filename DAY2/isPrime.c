#include<stdio.h>

int isPrime(int num){
    if(num <= 1)
    return 0;
    for(int i=0;i<=2/num;i++){
        if(num%i==0)
        return 0;
    }
    return 1;
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(isPrime(num)){
        printf("%d is a prime numebr.\n",num);
    }else{
        printf("%d is not a prime number.\n",num);
    }
    return 0;
}