#include <stdio.h>

void addMatrix(int a[][10], int b[][10], int c[][10], int row, int col) {

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main() {

    int a[10][10], b[10][10], c[10][10];
    int row, col;

    printf("Enter rows and columns: ");
    scanf("%d %d", &row, &col);

    printf("Enter first matrix:\n");
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &b[i][j]);

    addMatrix(a, b, c, row, col);

    printf("Result:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;
}
