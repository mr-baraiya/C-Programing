#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int findLHS(int* nums, int numsSize) {
    if (numsSize == 0) return 0;

    qsort(nums, numsSize, sizeof(int), compare);

    int maxLength = 0;
    int start = 0;

    for (int end = 0; end < numsSize; end++) {
        while (nums[end] - nums[start] > 1) {
            start++;
        }

        if (nums[end] - nums[start] == 1) {
            int len = end - start + 1;
            if (len > maxLength) {
                maxLength = len;
            }
        }
    }

    return maxLength;
}
