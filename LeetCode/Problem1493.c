int longestSubarray(int* nums, int numsSize) {
    int left = 0;
    int zero_count = 0;
    int max_len = 0;

    for (int right = 0; right < numsSize; right++) {
        if (nums[right] == 0) {
            zero_count++;
        }

        // shrink window if more than 1 zero
        while (zero_count > 1) {
            if (nums[left] == 0) {
                zero_count--;
            }
            left++;
        }

        // window length - 1 (since one element must be deleted)
        int window_len = right - left;  
        if (window_len > max_len) {
            max_len = window_len;
        }
    }

    return max_len;
}
