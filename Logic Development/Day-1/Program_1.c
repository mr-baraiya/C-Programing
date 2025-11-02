//1.	Sum of 10 numbers
#include <stdio.h>
void main(){
    int i, sum = 0, num;
    for(i = 1; i <= 10; i++){
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num;
    }
    printf("The sum of the 10 numbers is: %d\n", sum);
}