// Given an unsorted integer array nums, return the smallest missing positive integer. You must implement 
// an algorithm that runs in O(n) time and uses constant extra space.  
// Input: nums = [1,2,0] Output: 3 
#include <stdio.h>

int firstMissingPositive(int* nums, int numsSize) {
    int i = 0;
    while (i < numsSize) {
        int correctPos = nums[i] - 1;
        if (nums[i] > 0 && nums[i] <= numsSize && nums[i] != nums[correctPos]) {
            int temp = nums[i];
            nums[i] = nums[correctPos];
            nums[correctPos] = temp;
        } else {
            i++;
        }
    }

    for (i = 0; i < numsSize; i++) {
        if (nums[i] != i + 1)
            return i + 1;
    }
    return numsSize + 1;
}

int main() {
    int nums[] = {1,2, 3,4,5,7};
    int size = sizeof(nums) / sizeof(nums[0]);
    printf("Smallest Missing Positive: %d\n", firstMissingPositive(nums, size));
    return 0;
}
