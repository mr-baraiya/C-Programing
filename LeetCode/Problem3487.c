#include <stdlib.h>

// Comparison function for qsort
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

// Function to calculate max sum of unique positive (and zero) elements
int maxSum(int* nums, int numsSize) {
    // Step 1: Sort the array
    qsort(nums, numsSize, sizeof(int), compare);

    // Step 2: Start from the last (largest) element
    int sum = nums[numsSize - 1];
    int prev = nums[numsSize - 1];

    // Step 3: Loop from second last to first, and only for non-negative numbers
    for (int i = numsSize - 2; i >= 0 && nums[i] >= 0; i--) {
        if (nums[i] != prev) {
            sum += nums[i];
        }
        prev = nums[i];
    }

    return sum;
}
