#include<stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n<0){
        printf("It is a negetive number.\n");
    }else if(n>0){
        printf("It is a positive number\n");
    }else{
        printf("Number is Zero.\n");
    }
    return 0;
}