int longestSubarray(int* nums, int numsSize) {
    int max = nums[0];

    // Step 1: Find the maximum value
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] > max) {
            max = nums[i];
        }
    }

    int maxLen = 0;
    int currentLen = 0;

    // Step 2: Find the longest streak of max
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == max) {
            currentLen++;
            if (currentLen > maxLen) {
                maxLen = currentLen;
            }
        } else {
            currentLen = 0;
        }
    }

    return maxLen;
}
