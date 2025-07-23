#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int removePair(char* s, char first, char second, int value, char* out) {
    int gain = 0;
    int top = -1; // stack pointer

    for (int i = 0; s[i]; ++i) {
        if (top >= 0 && out[top] == first && s[i] == second) {
            top--; // remove the previous character
            gain += value;
        } else {
            out[++top] = s[i]; // push character to stack
        }
    }
    out[++top] = '\0'; // null-terminate the result string
    return gain;
}

int maximumGain(char* s, int x, int y) {
    int len = strlen(s);
    char* temp1 = (char*)malloc(len + 1);
    char* temp2 = (char*)malloc(len + 1);
    int total = 0;

    if (x > y) {
        // Remove "ab" first
        int gain1 = removePair(s, 'a', 'b', x, temp1);
        int gain2 = removePair(temp1, 'b', 'a', y, temp2);
        total = gain1 + gain2;
    } else {
        // Remove "ba" first
        int gain1 = removePair(s, 'b', 'a', y, temp1);
        int gain2 = removePair(temp1, 'a', 'b', x, temp2);
        total = gain1 + gain2;
    }

    free(temp1);
    free(temp2);
    return total;
}
