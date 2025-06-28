#include <stdlib.h>

typedef struct {
    int value;
    int index;
} Element;

int compareByValueDesc(const void* a, const void* b) {
    return ((Element*)b)->value - ((Element*)a)->value;
}

int compareByIndex(const void* a, const void* b) {
    return ((Element*)a)->index - ((Element*)b)->index;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* maxSubsequence(int* nums, int numsSize, int k, int* returnSize) {
    Element* elements = (Element*)malloc(numsSize * sizeof(Element));
    for (int i = 0; i < numsSize; i++) {
        elements[i].value = nums[i];
        elements[i].index = i;
    }

    // Step 1: Sort by value descending
    qsort(elements, numsSize, sizeof(Element), compareByValueDesc);

    // Step 2: Take top k elements
    Element* topK = (Element*)malloc(k * sizeof(Element));
    for (int i = 0; i < k; i++) {
        topK[i] = elements[i];
    }

    // Step 3: Sort top k by original index
    qsort(topK, k, sizeof(Element), compareByIndex);

    // Step 4: Extract values
    int* result = (int*)malloc(k * sizeof(int));
    for (int i = 0; i < k; i++) {
        result[i] = topK[i].value;
    }

    free(elements);
    free(topK);
    *returnSize = k;
    return result;
}
