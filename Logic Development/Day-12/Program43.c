// WAP for following Scenario.  
// A child is running up a staircase with n steps and can hop either 1 step, 2 steps, or 3 steps at a time. The 
// task is to implement a method to count how many possible ways the child can run up the stairs. 
#include <stdio.h>
int countWays(int n) {
    if (n < 0) {
        return 0;
    }
    if (n == 0) {
        return 1;
    }
    return countWays(n - 1) + countWays(n - 2) + countWays(n - 3);
}
void main() {
    int n;
    printf("Enter the number of steps: ");
    scanf("%d", &n);
    int ways = countWays(n);
    printf("Number of ways to climb %d steps: %d\n", n, ways);
}