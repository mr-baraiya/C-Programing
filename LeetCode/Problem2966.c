#include <stdlib.h>

// Comparison function for qsort
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** divideArray(int* nums, int numsSize, int k, int* returnSize, int** returnColumnSizes) {
    qsort(nums, numsSize, sizeof(int), compare);

    int groups = numsSize / 3;
    int** res = (int**)malloc(groups * sizeof(int*));
    *returnColumnSizes = (int*)malloc(groups * sizeof(int));
    *returnSize = 0;

    for (int i = 0; i < numsSize; i += 3) {
        int a = nums[i];
        int b = nums[i + 1];
        int c = nums[i + 2];

        if (c - a > k) {
            // Free all previously allocated memory before returning
            for (int j = 0; j < *returnSize; j++) {
                free(res[j]);
            }
            free(res);
            free(*returnColumnSizes);
            *returnSize = 0;
            *returnColumnSizes = NULL;
            return NULL;
        }

        res[*returnSize] = (int*)malloc(3 * sizeof(int));
        res[*returnSize][0] = a;
        res[*returnSize][1] = b;
        res[*returnSize][2] = c;
        (*returnColumnSizes)[*returnSize] = 3;
        (*returnSize)++;
    }

    return res;
}
