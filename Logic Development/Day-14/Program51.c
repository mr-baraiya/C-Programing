// Given an array of coins[] of size n and a target value sum, where coins[i] represent the coins of different 
// denominations. You have an infinite supply of each of the coins. The task is to find the minimum 
// number of coins required to make the given value sum. If it is not possible to form the sum using the 
// given coins, return -1. 
// Input: coins[] = [25, 10, 5], sum = 30 
// Output: 2 
// Explanation : Minimum 2 coins needed, 25 and 5   
// Input: coins[] = [9, 6, 5, 1], sum = 19 
// Output: 3 
// Explanation: 19 = 9 + 9 + 1
#include <stdio.h>
#include <limits.h>
int minCoins(int* coins, int n, int sum) {
    int dp[sum + 1];
    for (int i = 0; i <= sum; i++) {
        dp[i] = INT_MAX;
    }
    dp[0] = 0;

    for (int i = 1; i <= sum; i++) {
        for (int j = 0; j < n; j++) {
            if (coins[j] <= i && dp[i - coins[j]] != INT_MAX) {
                dp[i] = dp[i] < dp[i - coins[j]] + 1 ? dp[i] : dp[i - coins[j]] + 1;
            }
        }
    }

    return dp[sum] == INT_MAX ? -1 : dp[sum];
}
void main() {
    int n, sum;
    printf("Enter the number of coin denominations: ");
    scanf("%d", &n);
    
    int coins[n];
    printf("Enter the coin denominations: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &coins[i]);
    }
    
    printf("Enter the target sum: ");
    scanf("%d", &sum);
    
    int result = minCoins(coins, n, sum);
    if (result != -1) {
        printf("Minimum number of coins required: %d\n", result);
    } else {
        printf("It is not possible to form the sum with the given coins.\n");
    }
}
