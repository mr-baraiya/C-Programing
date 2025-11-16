// Given an array nums with n integers, your task is to check if it could become non-decreasing by modifying 
// at most one element.  
// Input: nums = [4,2,3] 
// Output: true 
// Explanation: You could modify the first 4 to 1 to get a non-decreasing array. 
#include <stdio.h>

void main() {
    int n, i;
    int nums[100];
    int count = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    for (i = 1; i < n; i++) {
        if (nums[i] < nums[i - 1]) {
            count++;

            if (count > 1) {
                printf("false\n");
                return;
            }

            if (i == 1 || nums[i] >= nums[i - 2])
                nums[i - 1] = nums[i];
            else
                nums[i] = nums[i - 1];
        }
    }

    printf("true\n");
}
