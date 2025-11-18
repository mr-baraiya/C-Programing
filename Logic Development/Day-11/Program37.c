// WAP to multiply two matrices with error checking for dimension compatibility. 
#include <stdio.h>

void main() {
    int m, n, p, q;
    int i, j, k;

    printf("Enter rows of Matrix A: ");
    scanf("%d", &m);
    printf("Enter columns of Matrix A: ");
    scanf("%d", &n);
    int A[m][n];

    printf("Enter rows of Matrix B: ");
    scanf("%d", &p);
    printf("Enter columns of Matrix B: ");
    scanf("%d", &q);
    int B[p][q];

    if (n != p) {
        printf("Matrix multiplication NOT possible (columns of A must equal rows of B)\n");
        return;
    }
    int C[m][q];

    printf("\nEnter elements of Matrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEnter elements of Matrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            C[i][j] = 0;
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nResultant Matrix (A X B):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}
