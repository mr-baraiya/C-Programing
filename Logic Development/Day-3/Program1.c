// A
// B B
// C C C
// D D D D
// E E E E E
#include <stdio.h>

void main() {
    int i, j,n=0;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    char ch ='A';
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
        // ch++;
    }
}