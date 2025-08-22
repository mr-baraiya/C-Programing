int minimumArea(int** grid, int gridSize, int* gridColSize) {
    int minRow = gridSize, maxRow = -1;
    int minCol = gridColSize[0], maxCol = -1;

    for (int i = 0; i < gridSize; i++) {
        for (int j = 0; j < gridColSize[i]; j++) {
            if (grid[i][j] == 1) {
                if (i < minRow) minRow = i;
                if (i > maxRow) maxRow = i;
                if (j < minCol) minCol = j;
                if (j > maxCol) maxCol = j;
            }
        }
    }

    // if no ones found
    if (maxRow == -1) return 0;

    int height = maxRow - minRow + 1;
    int width = maxCol - minCol + 1;
    return height * width;
}
