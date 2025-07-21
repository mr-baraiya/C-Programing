#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* makeFancyString(char* s) {
    int n = strlen(s);
    char* res = (char*)malloc(n + 1); // Max size: no more than input length
    int j = 0; // index for res
    int count = 1;

    for (int i = 0; i < n; i++) {
        if (i > 0 && s[i] == s[i - 1]) {
            count++;
        } else {
            count = 1;
        }

        if (count <= 2) {
            res[j++] = s[i];
        }
    }

    res[j] = '\0'; // null-terminate the string
    return res;
}
