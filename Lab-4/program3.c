//3. Demonstrate difference between structure and union.(A)
#include <stdio.h>
#include <string.h>

struct student_struct{
	int roll;
	char name[30];
	float cpi;
};

union student_union{
	int roll;
	char name[30];
	float cpi;
};

void main(){
	struct student_struct s1;
    s1.roll=121;
    strcpy(s1.name,"Harry Potter");
    s1.cpi=8.5;

    union student_union s2;
    s2.roll=201;
    strcpy(s2.name,"Tony Stark");
    s2.cpi=7.8;
	
	printf("Structure Student : \n");
	printf("%d. %s %f : \n",s1.roll,s1.name,s1.cpi);
	printf("Union Student : \n");
	printf("%d. %s %f : \n",s2.roll,s2.name,s2.cpi);//Prints Garbage value
}
