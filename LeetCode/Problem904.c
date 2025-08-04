#include <stdio.h>

int totalFruit(int* fruits, int fruitsSize) {
    int maxFruits = 0;
    int count[100001] = {0};
    int unique = 0;
    int start = 0;

    for (int end = 0; end < fruitsSize; end++) {
        if (count[fruits[end]] == 0) unique++;
        count[fruits[end]]++;

        // Shrink window if more than 2 types
        while (unique > 2) {
            count[fruits[start]]--;
            if (count[fruits[start]] == 0) unique--;
            start++;
        }

        int windowSize = end - start + 1;
        if (windowSize > maxFruits) maxFruits = windowSize;
    }

    return maxFruits;
}
