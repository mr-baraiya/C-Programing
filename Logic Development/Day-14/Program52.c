// Find if a given string can be represented from a substring by iterating the substring “n” times. 
// Input: str = "abcabcabc"  Output: true 
// Input: str = "aabaabaabaab" Output: true 
// Input: str = "abcdabc"  Output: false
#include <stdio.h>
#include <string.h>
int isRepeatedSubstring(char* str) {
    int len = strlen(str);
    for (int subLen = 1; subLen <= len / 2; subLen++) {
        if (len % subLen == 0) {
            int match = 1;
            for (int i = subLen; i < len; i++) {
                if (str[i] != str[i % subLen]) {
                    match = 0;
                    break;
                }
            }
            if (match) {
                return 1;
            }
        }
    }
    return 0;
}
void main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    
    int result = isRepeatedSubstring(str);
    if (result) {
        printf("true\n");
    } else {
        printf("false\n");
    }
}