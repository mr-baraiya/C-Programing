#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char kthCharacter(int k) {
    char *word = malloc(2);
    strcpy(word, "a");
    int len = 1;

    while (len <= k) {
        char *res = malloc(len + 1);
        for (int i = 0; i < len; i++) {
            char ch = word[i];
            res[i] = (char)(((ch - 'a' + 1) % 26) + 'a');
        }
        res[len] = '\0';

        char *newWord = malloc(len * 2 + 1);
        strcpy(newWord, word);
        strcat(newWord, res);

        free(word);
        free(res);
        word = newWord;
        len = strlen(word);
    }

    char result = word[k-1];
    free(word);
    return result;
}
