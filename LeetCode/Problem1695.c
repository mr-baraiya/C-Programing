#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int maximumUniqueSubarray(int* nums, int numsSize) {
    int seen[10001] = {0};  // values in nums are <= 10000
    int left = 0, currentSum = 0, maxSum = 0;

    for (int right = 0; right < numsSize; right++) {
        // Shrink window if duplicate found
        while (seen[nums[right]]) {
            seen[nums[left]] = 0;
            currentSum -= nums[left];
            left++;
        }

        seen[nums[right]] = 1;
        currentSum += nums[right];
        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    return maxSum;
}
