#include <stdio.h>

// Function to transpose the matrix
void transposeMatrix(int n, int m, int matrix[n][m], int result[m][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}


void reverseRows(int n, int m, int matrix[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m / 2; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][m - 1 - j];
            matrix[i][m - 1 - j] = temp;
        }
    }
}

void rotate90Degrees(int n, int m, int matrix[n][m], int result[m][n]) {
    transposeMatrix(n, m, matrix, result);

    reverseRows(m, n, result);
}

int main() {
    int n, m;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &n, &m);

    int matrix[n][m];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int result[m][n];

transposeMatrix(n,m,matrix,result);
    printf("The transpose of the matrix is: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    
    rotate90Degrees(n, m, matrix, result);

    // Print the rotated matrix
    printf("Rotated matrix by 90 degrees clockwise:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}