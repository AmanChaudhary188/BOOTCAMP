#include <stdio.h>

void printSnakePattern(int n, int m, int matrix[n][m]) {
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            // left to right
            for (int j = 0; j < m; j++) {
                printf("%d ", matrix[i][j]);
            }
        } else {
            //right to left
            for (int j = m - 1; j >= 0; j--) {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }
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

printf("Matrix: \n");
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        printf("%d ",matrix[i][j]);
    }
    printf("\n");
}


    printf("Matrix in snake pattern:\n");
    printSnakePattern(n, m, matrix);

    return 0;
}