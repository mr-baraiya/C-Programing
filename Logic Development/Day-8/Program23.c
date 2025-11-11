//Given an array, rotate the array to the right by k steps, where k is non-negative.  
// Input: nums = [1,2,3,4,5,6,7], k = 3 
// Output: [5,6,7,1,2,3,4]
#include <stdio.h>
void rotate(int* nums, int numsSize, int k) {
    k = k % numsSize;
    int temp[numsSize];

    for (int i = 0; i < numsSize; i++) {
        temp[(i + k) % numsSize] = nums[i];
    }

    for (int i = 0; i < numsSize; i++) {
        nums[i] = temp[i];
    }
}