#include <stdio.h>


int is_prime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int N;
    printf("Enter a number N: ");
    scanf("%d", &N);

    printf("Prime numbers between 1 and %d are:\n", N);
    for (int i = 2; i <= N; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
