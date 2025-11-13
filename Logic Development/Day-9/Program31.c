// Given a string S of length n, the task is to find the earliest repeated character in it. The earliest repeated 
// character means, the character that occurs more than once and whose second occurrence has the 
// smallest index. 
// Input: s = "geeksforgeeks"  
// Output: e  
// Explanation: e is the first element that repeats
#include <stdio.h>
#include <string.h>

char findEarliestRepeatedChar(const char *s) {
    int charIndex[256];
    for (int i = 0; i < 256; i++) {
        charIndex[i] = -1; // Initialize all characters as not seen
    }

    for (int i = 0; s[i] != '\0'; i++) {
        if (charIndex[(unsigned char)s[i]] == -1) {
            charIndex[(unsigned char)s[i]] = i; // Mark the first occurrence
        } else {
            return s[i]; // Return the character on second occurrence
        }
    }
    return '\0'; // No repeated character found
}

int main() {
    const char *s = "geeksforgeeks";
    char result = findEarliestRepeatedChar(s);
    if (result != '\0') {
        printf("Earliest repeated character: %c\n", result);
    } else {
        printf("No repeated character found.\n");
    }
    return 0;
}