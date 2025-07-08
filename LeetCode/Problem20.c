#include <stdbool.h>
#include <string.h>

bool isValid(char* s) {
    int n = strlen(s);
    char stack[n];
    int top = -1;

    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            stack[++top] = ')';
        } else if (s[i] == '{') {
            stack[++top] = '}';
        } else if (s[i] == '[') {
            stack[++top] = ']';
        } else {
            if (top == -1 || s[i] != stack[top]) {
                return false;
            }
            top--;  // matched bracket, pop from stack
        }
    }

    return top == -1;  // stack should be empty
}
