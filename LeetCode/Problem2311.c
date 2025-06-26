#include <string.h>

int longestSubsequence(char* s, int k) {
    int count = 0;
    long long value = 0;
    int power = 0;
    int n = strlen(s);

    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '0') {
            count++;
            power++;
        } else {
            if (power < 31) {
                long long add = 1LL << power;
                if (value + add <= k) {
                    value += add;
                    count++;
                }
                power++;
            } else {
                power++;
            }
        }
    }

    return count;
}
