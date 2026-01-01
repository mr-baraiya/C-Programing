//            1
//          1   1
//        1   2   1
//      1   3   3    1
//    1  4    6   4   1
//  1  5   10   10  5   1
#include <stdio.h>
void main() {
    int i, j, space, n = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        // Print leading spaces
        for(space = 0; space < n - i - 1; space++) {
            printf("  ");
        }
        int coeff = 1; // First coefficient is always 1
        for(j = 0; j <= i; j++) {
            printf("%4d", coeff);
            coeff = coeff * (i - j ) / (j + 1); // Calculate next coefficient
        }
        printf("\n");
    }
}