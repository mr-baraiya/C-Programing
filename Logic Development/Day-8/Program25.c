// WAP for following Scenario. 
// Given n rupees and a chocolate price of m for each chocolate, with a wrapper exchange offer of 1 
// chocolate per k wrappers, calculate the total number of chocolates you can eat with n rupees.  
#include <stdio.h>

void main() {
    int n, m, k;
    printf("Enter the total money (n): ");
    scanf("%d", &n);
    printf("Enter the price of one chocolate (m): ");
    scanf("%d", &m);
    printf("Enter the number of wrappers needed for one chocolate (k): ");
    scanf("%d", &k);

    int chocolates = n / m;
    int wrappers = chocolates;

    while (wrappers >= k) {
        int newChocolates = wrappers / k;
        chocolates += newChocolates;
        wrappers = newChocolates + (wrappers % k);
    }

    printf("Total chocolates eaten: %d\n", chocolates);
}
