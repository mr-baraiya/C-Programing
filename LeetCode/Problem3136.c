#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool isValid(char* word) {
    int len = strlen(word);
    if (len < 3) {
        return false;
    }

    bool hasVowel = false;
    bool hasConsonant = false;

    for (int i = 0; i < len; i++) {
        char ch = word[i];

        if (!isalnum(ch)) {
            return false;
        }

        char lowerCh = tolower(ch);
        if (strchr("aeiou", lowerCh)) {
            hasVowel = true;
        } else if (isalpha(lowerCh) && !strchr("aeiou", lowerCh)) {
            hasConsonant = true;
        }
    }

    return hasVowel && hasConsonant;
}
