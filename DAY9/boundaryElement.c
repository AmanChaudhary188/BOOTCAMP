#include <stdio.h>

void printBoundaryElements(int n, int m, int matrix[n][m]) {
    // Print top row
    for (int j = 0; j < m; j++) {
        printf("%d ", matrix[0][j]);
    }
    // Print right column
    for (int i = 1; i < n; i++) {
        printf("%d ", matrix[i][m - 1]);
    }
    // Print bottom row if there is more than one row
    if (n > 1) {
        for (int j = m - 2; j >= 0; j--) {
            printf("%d ", matrix[n - 1][j]);
        }
    }
    // Print left column if there is more than one column
    if (m > 1) {
        for (int i = n - 2; i > 0; i--) {
            printf("%d ", matrix[i][0]);
        }
    }
    printf("\n");
}

int main() {
    int n, m;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);

    int matrix[n][m];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Boundary elements of the matrix:\n");
    printBoundaryElements(n, m, matrix);

    return 0;
}