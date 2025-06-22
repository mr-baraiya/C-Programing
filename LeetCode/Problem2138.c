#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** divideString(char* s, int k, char fill, int* returnSize) {
    int n = strlen(s);
    int totalParts = (n + k - 1) / k;
    *returnSize = totalParts;

    char** result = (char**)malloc(totalParts * sizeof(char*));

    for (int i = 0; i < totalParts; i++) {
        result[i] = (char*)malloc((k + 1) * sizeof(char));

        for (int j = 0; j < k; j++) {
            int index = i * k + j;
            if (index < n) {
                result[i][j] = s[index];
            } else {
                result[i][j] = fill;
            }
        }

        result[i][k] = '\0';
    }

    return result;
}
