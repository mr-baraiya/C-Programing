//8.	Print numbers divisible by 2 between two numbers
#include <stdio.h>
void main(){
    int start, end;
    int n = 2;
    printf("Enter two numbers (start and end): ");
    scanf("%d %d", &start, &end);
    printf("Numbers divisible by %d between %d and %d are:\n", n, start, end);
    for(int i = start; i <= end; i++){
        if(i % n == 0){
            printf(" %d ", i);
        }
    }
}