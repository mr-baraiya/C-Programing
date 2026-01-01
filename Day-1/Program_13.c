//13.	Check whether a number is a Perfect Number ex. 28, 496
#include <stdio.h>
void main(){
    int num, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    for(int i = 1; i <= num / 2; i++){
        if(num % i == 0){
            sum += i;
        }
    }
    if(sum == num){
        printf("%d is a Perfect Number.\n", num);
    } else {
        printf("%d is not a Perfect Number.\n", num);
    }
}