//1. Illustrate use of #deƒine preprocessor. (A)
#include <stdio.h>
#define PI 3.14
#define PRINT_NUM(n) (printf("%f \n",n + 0.0))
#define PRINT(s) (printf("%s \n",s))

void main(){
	float n = PI;
	printf("n = %f\n",n);
    printf("PI = %f\n",PI);
    
    PRINT_NUM(10);
	PRINT_NUM(10.25);
	PRINT("John");
    char str[]="Tony Stark";   
    PRINT(str);
}

