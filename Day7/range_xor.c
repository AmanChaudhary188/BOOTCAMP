#include<stdio.h>

int xor_upto(int n) {
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    return 0;
}

int xor_range(int l, int r) {
    return xor_upto(r) ^ xor_upto(l - 1);
}


int main(){
    int l,r;
    printf("Enter the range of numbers:");
    scanf("%d %d",&l,&r);

    printf("XOR of range [%d,%d] is %d",l,r,xor_range(l,r));
    return 0;
}

