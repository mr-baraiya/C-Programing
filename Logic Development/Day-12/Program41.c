// You are given n disks placed on a starting rod (from), with the smallest disk on top and the largest at the 
// bottom. There are three rods: the starting rod(from), the target rod (to), and an auxiliary rod (aux). 
// You have to calculate the total number of moves required to transfer all n disks from the starting rod to 
// the target rod, following these rules: 
// 1. Only one disk can be moved at a time. 
// 2. A disk can only be placed on top of a larger disk or on an empty rod. 
// Return the number of moves needed to complete the task. 
// Input: n = 3 
// Output: 7 
// Explanation: For N=3, steps will be as follows in the example and total 7 steps will be taken. 
// move disk 1 from rod 1 to rod 3 
// move disk 2 from rod 1 to rod 2 
// move disk 1 from rod 3 to rod 2
#include <stdio.h>
int towerOfHanoi(int n, char from, char to, char aux) {
    if (n == 0) {
        return 0;
    }
    int moves = 0;
    moves += towerOfHanoi(n - 1, from, aux, to);
    moves += 1; // Move disk from 'from' to 'to'
    moves += towerOfHanoi(n - 1, aux, to, from);
    return moves;
}
void main() {
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    int totalMoves = towerOfHanoi(n, 'A', 'C', 'B');
    printf("Total number of moves required: %d\n", totalMoves);
}

// #include <stdio.h>
// #include <math.h>

// long long toh(int n) {
//     return (long long)pow(2, n) - 1;
// }

// int main() {
//     int n = 3;
//     printf("%lld\n", toh(n));
//     return 0;
// }
