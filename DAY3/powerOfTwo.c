#include <stdio.h>


int powerOfTwo(int n) {
    if (n == 0) {
        return 1;
    } else {
        return 2 * powerOfTwo(n - 1);
    }
}

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("2 to the power of %d is %d\n", n, powerOfTwo(n));
    return 0;
}