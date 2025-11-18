// Given an unsorted integer array nums, return the smallest missing positive integer. You must implement 
// an algorithm that runs in O(n) time and uses constant extra space.  
// Input: nums = [1,2,0] Output: 3 
#include <stdio.h>
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int firstMissingPositive(int* nums, int numsSize) {
    for (int i = 0; i < numsSize; i++) {
        while (nums[i] > 0 && nums[i] <= numsSize && nums[nums[i] - 1] != nums[i]) {
            swap(&nums[i], &nums[nums[i] - 1]);
        }
    }
    
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != i + 1) {
            return i + 1;
        }
    }
    
    return numsSize + 1;
}
void main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int nums[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    int missing = firstMissingPositive(nums, n);
    printf("The smallest missing positive integer is: %d\n", missing);
}