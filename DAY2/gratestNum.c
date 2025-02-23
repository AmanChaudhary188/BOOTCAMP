#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter value of a,b and c: ");
    scanf("%d %d %d",&a,&b,&c);

    int gratest=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("The gratest number is : %d",gratest);
    return 0;
}