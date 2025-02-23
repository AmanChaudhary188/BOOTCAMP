#include<stdio.h>

int transposeMatrix(int n,int m,int matrix[n][m],int result[m][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            result[j][i]=matrix[i][j];
        }
    }
    return 0;
}

int main(){
    int n,m;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d",&n,&m);

    int matrix[n][m];
    printf("Enter the elements of the matrix: ");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The matrix is: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
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
    return 0;
}