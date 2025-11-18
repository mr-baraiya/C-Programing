// Given an array nums of distinct integers, return all the possible permutations. You can return the answer 
// in any order.  
// Input: nums = [1,2,3] Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
#include <stdio.h>
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void permute(int* nums, int start, int end) {
    if (start == end) {
        printf("[");
        for (int i = 0; i <= end; i++) {
            printf("%d", nums[i]);
            if (i < end) {
                printf(", ");
            }
        }
        printf("]\n");
    } else {
        for (int i = start; i <= end; i++) {
            swap(&nums[start], &nums[i]);
            permute(nums, start + 1, end);
            swap(&nums[start], &nums[i]);
        }
    }
}

void main() {
    int nums[] = {1, 2, 3};
    int n = sizeof(nums) / sizeof(nums[0]);
    permute(nums, 0, n - 1);
}