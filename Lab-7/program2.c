//2. Demonstrate int, float, double and char pointer.(A)
#include <stdio.h>
void main(){
	int a = 10;
	float b = 12.34;
	double c = 123.4567;
	char d = 'd';
	int *p1;//it can store only int data variable address
	float *p2;
	double *p3;
	char *p4;
	p1 = &a;
	p2 = &b;
	p3 = &c;
	p4 = &d;
	printf("int pointer -> %d \n",*p1);
	printf("Float pointer -> %f \n",*p2);
	printf("Double pointer -> %lf \n",*p3);
	printf("char pointer -> %c",*p4);
}
