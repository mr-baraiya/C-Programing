int maximumDifference(int* nums, int numsSize) {
    int i = 0;
    int max = 0;

    for (int j = 1; j < numsSize; j++) {
        if (j > i && nums[j] > nums[i]) {
            int tempMax = nums[j] - nums[i];
            if (tempMax > max) {
                max = tempMax;
            }
        } else {
            i = j;
        }
    }

    return (max == 0) ? -1 : max;
}
