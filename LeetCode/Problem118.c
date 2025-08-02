#include <stdlib.h>

int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    // Set the number of rows
    *returnSize = numRows;

    // Allocate memory for column sizes
    *returnColumnSizes = (int*)malloc(sizeof(int) * numRows);

    // Allocate memory for the triangle (array of int pointers)
    int** triangle = (int**)malloc(sizeof(int*) * numRows);

    for (int i = 0; i < numRows; i++) {
        int cols = i + 1;  // Number of elements in this row
        (*returnColumnSizes)[i] = cols;

        // Allocate memory for each row
        triangle[i] = (int*)malloc(sizeof(int) * cols);

        // First and last elements of the row are always 1
        triangle[i][0] = 1;
        triangle[i][cols - 1] = 1;

        // Fill in the middle elements
        for (int j = 1; j < cols - 1; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    return triangle;
}
