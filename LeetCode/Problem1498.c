#include <stdio.h>
#include <stdlib.h>

#define MOD 1000000007

int cmp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int numSubseq(int* nums, int numsSize, int target) {
    qsort(nums, numsSize, sizeof(int), cmp);

    // Precompute powers of 2 modulo MOD
    int* pow2 = (int*)malloc(sizeof(int) * numsSize);
    pow2[0] = 1;
    for (int i = 1; i < numsSize; ++i) {
        pow2[i] = (pow2[i - 1] * 2) % MOD;
    }

    int left = 0, right = numsSize - 1;
    int count = 0;

    while (left <= right) {
        if (nums[left] + nums[right] <= target) {
            count = (count + pow2[right - left]) % MOD;
            left++;
        } else {
            right--;
        }
    }

    free(pow2);  // free memory
    return count;
}
