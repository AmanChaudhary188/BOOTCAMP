#include<stdio.h>

int main(){
    int num,reverse=0,remainder;

    printf("Enter a number: ");
    scanf("%d",&num);
    int originalNum=num;

    while(num!=0){
        remainder=num%10;
        reverse=reverse*10+remainder;
        num=num/10;
    }
    printf("Reversed is: %d\n",reverse);

     if (originalNum == reverse) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }
    return 0;
}