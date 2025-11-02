//9.	Find factors of a given number
#include <stdio.h>
void main(){
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factors of %d are:\n", num);
    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            printf(" %d ", i);
        }
    }
}