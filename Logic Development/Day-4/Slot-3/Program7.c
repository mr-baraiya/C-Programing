#include <stdio.h>

void main() {
    int r1, c1, r2, c2;
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication not possible (columns of 1st ≠ rows of 2nd)\n");
        return;
    }

    int mat1[r1][c1], mat2[r2][c2], ans[r1][c2];

    // Input matrix 1
    printf("\nEnter elements for Matrix 1:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input matrix 2
    printf("\nEnter elements for Matrix 2:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            ans[i][j] = 0;
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                ans[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Display result
    printf("\nMatrix 1:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%4d", mat1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix 2:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%4d", mat2[i][j]);
        }
        printf("\n");
    }

    printf("\nResult (Matrix1 * Matrix2):\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%4d", ans[i][j]);
        }
        printf("\n");
    }
}
