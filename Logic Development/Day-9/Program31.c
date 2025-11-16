// Given a string S of length n, the task is to find the earliest repeated character in it. The earliest repeated 
// character means, the character that occurs more than once and whose second occurrence has the 
// smallest index. 
// Input: s = "geeksforgeeks"  
// Output: e  
// Explanation: e is the first element that repeats
#include <stdio.h>
#include <string.h>
#include <limits.h>

void main() {
    char s[100];
    int i, j;
    int minSecondIndex = INT_MAX;
    char ans = '\0';

    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (s[i] == s[j]) {
                if (j < minSecondIndex) {
                    minSecondIndex = j;
                    ans = s[i];
                }
                break;
            }
        }
    }

    if (ans != '\0')
        printf("Earliest repeated character = %c\n", ans);
    else
        printf("No repeated character found\n");

}
