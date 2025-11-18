// You are given several boxes with different colors represented by different positive numbers. You may 
// experience several rounds to remove boxes until there is no box left. Each time you can choose some 
// continuous boxes with the same color, remove them and get k * k points. Return the maximum points you can get.  
// Input: boxes = [1,3,2,2,2,3,4,3,1] Output: 23 
// Explanation: [1, 3, 2, 2, 2, 3, 4, 3, 1]  ----> [1, 3, 3, 4, 3, 1] (3*3=9 points)  ----> [1, 3, 3, 3, 1] (1*1=1 points)  ----> [1, 1] (3*3=9 points)  ----> [] (2*2=4 points) 
#include <stdio.h>
#include <stdlib.h>
#define MAX_BOXES 100
int dp[MAX_BOXES][MAX_BOXES][MAX_BOXES];
int removeBoxesUtil(int* boxes, int left, int right, int k) {
    if (left > right) {
        return 0;
    }
    if (dp[left][right][k] != -1) {
        return dp[left][right][k];
    }
    
    while (left + 1 <= right && boxes[left] == boxes[left + 1]) {
        left++;
        k++;
    }
    
    int result = (k + 1) * (k + 1) + removeBoxesUtil(boxes, left + 1, right, 0);
    
    for (int m = left + 1; m <= right; m++) {
        if (boxes[m] == boxes[left]) {
            result = result > removeBoxesUtil(boxes, left + 1, m - 1, 0) + removeBoxesUtil(boxes, m, right, k + 1) ? result : removeBoxesUtil(boxes, left + 1, m - 1, 0) + removeBoxesUtil(boxes, m, right, k + 1);
        }
    }
    
    dp[left][right][k] = result;
    return result;
}
int removeBoxes(int* boxes, int boxesSize) {
    for (int i = 0; i < boxesSize; i++) {
        for (int j = 0; j < boxesSize; j++) {
            for (int k = 0; k < boxesSize; k++) {
                dp[i][j][k] = -1;
            }
        }
    }
    return removeBoxesUtil(boxes, 0, boxesSize - 1, 0);
}
void main() {
    int n;
    printf("Enter the number of boxes: ");
    scanf("%d", &n);
    
    int* boxes = (int*)malloc(n * sizeof(int));
    printf("Enter the colors of the boxes: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &boxes[i]);
    }
    
    int maxPoints = removeBoxes(boxes, n);
    printf("The maximum points you can get is: %d\n", maxPoints);
    
    free(boxes);
}