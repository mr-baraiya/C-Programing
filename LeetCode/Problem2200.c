#include <stdlib.h>
#include <stdbool.h>

int* findKDistantIndices(int* nums, int numsSize, int key, int k, int* returnSize) {
    bool* included = (bool*)calloc(numsSize, sizeof(bool));
    int count = 0;

    // Mark all indices that are within k distance of key occurrences
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == key) {
            int left = (i - k < 0) ? 0 : i - k;
            int right = (i + k >= numsSize) ? numsSize - 1 : i + k;
            for (int j = left; j <= right; j++) {
                if (!included[j]) {
                    included[j] = true;
                    count++;
                }
            }
        }
    }

    // Allocate result array
    int* result = (int*)malloc(count * sizeof(int));
    int idx = 0;
    for (int i = 0; i < numsSize; i++) {
        if (included[i]) {
            result[idx++] = i;
        }
    }

    free(included);
    *returnSize = count;
    return result;
}
