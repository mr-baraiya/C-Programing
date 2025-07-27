int countHillValley(int* nums, int numsSize) {
    // Step 1: Filter out consecutive duplicates into a new array
    int filtered[numsSize];
    int filteredSize = 0;
    filtered[filteredSize++] = nums[0];

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[i - 1]) {
            filtered[filteredSize++] = nums[i];
        }
    }

    int count = 0;

    // Step 2: Count hills and valleys
    for (int i = 1; i < filteredSize - 1; i++) {
        int prev = filtered[i - 1];
        int curr = filtered[i];
        int next = filtered[i + 1];

        if (curr > prev && curr > next) {
            count++; // hill
        } else if (curr < prev && curr < next) {
            count++; // valley
        }
    }

    return count;
}
