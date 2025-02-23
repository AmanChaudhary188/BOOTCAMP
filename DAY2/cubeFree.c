#include <stdio.h>
#include <math.h>


int isCubeFree(int num) {
    for (int i = 2; i <= cbrt(num); i++) {
        if (num % (i * i * i) == 0) {
            return 0;
        }
    }
    return 1;
}

void findAandB(int n, int *a, int *b) {
    *a = 1;
    *b = n;
    for (int i = 2; i <= cbrt(n); i++) {
        while (n % (i * i * i) == 0) {
            *a *= i;
            n /= (i * i * i);
        }
    }
    *b = n;
}

int main() {
    int n, a, b;
    printf("Enter an integer n: ");
    scanf("%d", &n);

    findAandB(n, &a, &b);

    printf("a = %d, b = %d\n", a, b);
    return 0;
}