#include <stdio.h>
#define ROWS 3
#define COLS 5

// Function to input a matrix
void InputMatrix(int matrix[ROWS][COLS]) {
    printf("Enter elements of the %dx%d matrix (row-wise):\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display a matrix
void ShowMatrix(int matrix[ROWS][COLS]) {
    printf("Matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to multiply a matrix by a scalar
void ScalarMultiply(int matrix[ROWS][COLS], int scalar) {
    printf("Multiplied by %d:\n", scalar);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j] * scalar);
        }
        printf("\n");
    }
}

int main() {
    int matrix[ROWS][COLS];
    int scalar;


    InputMatrix(matrix);
    ShowMatrix(matrix);

    printf("Enter a scalar value: ");
    scanf("%d", &scalar);

    // Multiply the matrix by the scalar and display the result
    ScalarMultiply(matrix, scalar);

    return 0;
}
