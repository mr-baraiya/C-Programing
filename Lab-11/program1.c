//1. Illustrate use of #deƒine preprocessor. (A)
#include <stdio.h>
#define PI 3.14
#define PRINT_NUM(n) (printf("%d \n",n))
#define PRINT(s) (printf("%s \n",s))

void main(){
	float n1 = PI;
	printf("n = %f\n",n1);
    printf("PI = %f\n",PI);
    
    int n2 = 10;
    PRINT_NUM(n2);
    
    char str[]="Tony Stark";   
    PRINT(str);
	PRINT("John");
}

