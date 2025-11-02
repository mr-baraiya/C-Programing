//5.	Print sum of digits of a given number
#include <stdio.h>
void main(){
    int num, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0){
        digit = num % 10;
        sum += digit;
        num = num / 10;
    }
    printf("Sum of digits: %d\n",sum);
}