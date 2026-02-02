#include <stdio.h>


void InputMatrix(int matrix[][100], int m, int n) {
    printf("Enter elements of the matrix (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}


void ShowMatrix(int matrix[][100], int m, int n) {
    printf("Matrix (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to perform scalar multiplication on a matrix of size MXN
void ScalarMultiply(int matrix[][100], int m, int n, int scalar) {
    printf("Scalar multiplication of the matrix by %d:\n", scalar);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] *= scalar;
        }
    }
}

int main() {
    int m, n;


    printf("Enter the number of rows (M) and columns (N) of the matrix: ");
    scanf("%d %d", &m, &n);


    int matrix[100][100];
    InputMatrix(matrix, m, n);
    ShowMatrix(matrix, m, n);



    int scalar;
    printf("Enter a scalar value for multiplication: ");
    scanf("%d", &scalar);

    ScalarMultiply(matrix, m, n, scalar);
    ShowMatrix(matrix, m, n);

    return 0;
}
