#include<stdio.h>

void checkBit(int n, int k) {
    if (n & (1 << k)) {
        printf("Yes, the %d-th bit is set\n", k);
    } else {
        printf("No, the %d-th bit is not set\n", k);
    }
}

int main() {
    int n ;
    int k ;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter the bit position to check: ");
    scanf("%d", &k);
    
    checkBit(n, k);
    return 0;
}