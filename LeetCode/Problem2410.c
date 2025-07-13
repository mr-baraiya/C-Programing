// Comparison function for qsort
int cmp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int matchPlayersAndTrainers(int* players, int playersSize, int* trainers, int trainersSize) {
    // Sort using qsort (O(n log n))
    qsort(players, playersSize, sizeof(int), cmp);
    qsort(trainers, trainersSize, sizeof(int), cmp);

    int i = 0, j = 0, matches = 0;
    while (i < playersSize && j < trainersSize) {
        if (players[i] <= trainers[j]) {
            matches++;
            i++;
        }
        j++;
    }
    return matches;
}
