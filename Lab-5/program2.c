//2. Create structure student with name, percentage and age. Read data of N students using 
//array of structure. Print details of student with maximum percentage.(A)
#include <stdio.h>

struct Student{
	char name[30];
	float percentage;
	int age;
};

void main(){
	int n=0;
	printf("Enter the Size Of Student Array : ");
	scanf("%d",&n);
	getchar();
	struct Student s[n];
	
	//get Details Of Students
	int i=0;
	for(i=0;i<n;i++){
		printf("\nEnter the Student%d Name : ",(i+1));
		gets(s[i].name);
		printf("Enter the Student%d Percentages : ",(i+1));
		scanf("%f",&s[i].percentage);
		printf("Enter the Student%d Age : ",(i+1));
		scanf("%d",&s[i].age);
		getchar();
	}
	//Find The Max Index 
	int max_Index = 0;
	for(i=0;i<n;i++){
		if(s[i].percentage > s[max_Index].percentage ){
			max_Index = i;
		}
	}
	//Display The Details Of Student which have Max Percentage
	printf("\nStudent Name : %s \n",s[max_Index].name);
	printf("Student Percentage : %f \n",s[max_Index].percentage);
	printf("Student Age : %d \n",s[max_Index].age);
}
