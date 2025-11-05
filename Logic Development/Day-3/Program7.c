#include <stdio.h>

void main() {
    int rows = 11, cols = 11;

    int mid = rows / 2;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (i == 0 || i == mid || i == rows - 1) {
                printf("* ");
            } else if (i < mid && j == 0) {
                printf("* ");
            } else if (i > mid && j == cols - 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}