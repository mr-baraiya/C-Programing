//1. Create structure student with name, percentage and age. Read data of 5 students using 
//array of structure. (A)
#include <stdio.h>

struct Student{
	char name[30];
	float percentage;
	int age;
};

void main(){
	struct Student s[5];
	
	//get Details Of Students
	int i=0;
	for(i=0;i<5;i++){
		printf("\nEnter the Student%d Name : ",(i+1));
		if( i!=0 ){
			gets(s[i].name);
		}
		gets(s[i].name);
		printf("Enter the Student%d Percentages : ",(i+1));
		scanf("%f",&s[i].percentage);
		printf("Enter the Student%d Age : ",(i+1));
		scanf("%d",&s[i].age);
	}
	
	//Display The Details Of Student
	for(i=0;i<5;i++){
		printf("\nStudent Name : %s \n",s[i].name);
		printf("Student Percentage : %f \n",s[i].percentage);
		printf("Student Age : %d \n",s[i].age);
	}
}
