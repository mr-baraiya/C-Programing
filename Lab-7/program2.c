//2. Demonstrate int, float, double and char pointer.(A)
#include <stdio.h>
void main(){
	//declare a variables
	int a = 10;
	float b = 12.34;
	double c = 123.4567;
	char d = 'z';
	//declare a pointers
	int *p1 = &a;
	float *p2 = &b;
	double *p3 = &c;
	char *p4 = &d;
	
	printf("int pointer -> %d \n",*p1);
	printf("Float pointer -> %f \n",*p2);
	printf("Double pointer -> %lf \n",*p3);
	printf("char pointer -> %c",*p4);
}
