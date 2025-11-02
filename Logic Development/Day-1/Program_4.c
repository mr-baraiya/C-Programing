//4.	Print digits of a number in reverse order
#include <stdio.h>
void main(){
    int num, rev = 0;
    printf("Enter the number : ");
    scanf("%d", &num);
    while(num != 0){
        rev = rev * 10 + num % 10; 
        num = num / 10;
    }
    printf("Reversed Number: %d\n", rev);
}