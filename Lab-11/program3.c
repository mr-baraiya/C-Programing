//3. Deƒine a function like Macro that should use printf 
//Deƒine Macro PRINT to print given integer argument.(A)

#include <stdio.h>
#define PRINT_INT(n) (printf("%d",n))

void main(){
	int n=0;
	printf("Enter the Integer : ");
	scanf("%d",&n);
	PRINT_INT(n);
}
