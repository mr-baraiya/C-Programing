// Given a string that contains a special character together with alphabets (‘a’ to ‘z’ and ‘A’ to ‘Z’), reverse 
// the string in a way that special characters are not affected. 
// Input: a!!!b.c.d,e'f,ghi 
// Output: i!!!h.g.f,e'd,cba 
// Input:   str = “Ab,c,de!$” 
// Output:  str = “ed,c,bA!$” 
#include <stdio.h>
#include <string.h>
void reverseString(char* str) {
    int left = 0;
    int right = strlen(str) - 1;
    
    while (left < right) {
        if (!((str[left] >= 'a' && str[left] <= 'z') || (str[left] >= 'A' && str[left] <= 'Z'))) {
            left++;
        } else if (!((str[right] >= 'a' && str[right] <= 'z') || (str[right] >= 'A' && str[right] <= 'Z'))) {
            right--;
        } else {
            char temp = str[left];
            str[left] = str[right];
            str[right] = temp;
            left++;
            right--;
        }
    }
}
void main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    
    reverseString(str);
    printf("Reversed string: %s\n", str);
}