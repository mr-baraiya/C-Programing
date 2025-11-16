// Given two strings s1 and s2 consisting of lowercase characters, the task is to check whether the two given 
// strings are anagrams of each other or not. An anagram of a string is another string that contains the same 
// characters, only the order of characters can be different. 
// Input: s1 = “geeks” s2 = “kseeg” 
// Output: true 
// Explanation: Both the strings have the same characters with same frequency. So, they are anagrams. 
#include <stdio.h>
#include <string.h>

void main() {
    char s1[100], s2[100];
    int i, j;
    int n1, n2;
    int freq1[26] = {0}, freq2[26] = {0};

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    n1 = strlen(s1);
    n2 = strlen(s2);

    if (n1 != n2) {
        printf("No Anagrams\n");
        return;
    }

    for (i = 0; i < n1; i++)
        freq1[s1[i] - 'a']++;

    for (i = 0; i < n2; i++)
        freq2[s2[i] - 'a']++;

    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            printf("No Anagrams\n");
            return;
        }
    }

    printf("Anagrams\n");
}
