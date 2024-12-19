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
	struct Student s[n];
	
	//get Details Of Students
	int i=0;
	for(i=0;i<n;i++){
		printf("\nEnter the Student%d Name : ",(i+1));
		gets(s[i].name);
		gets(s[i].name);
		printf("Enter the Student%d Percentages : ",(i+1));
		scanf("%f",&s[i].percentage);
		printf("Enter the Student%d Age : ",(i+1));
		scanf("%d",&s[i].age);
	}
	//Calculate The Max_Percentage
	float Max_Percentage = 0;
	for(i=0;i<n;i++){
		if(Max_Percentage < s[i].percentage){
			Max_Percentage = s[i].percentage;
		}
	}
	//Display The Details Of Student
	for(i=0;i<n;i++){
		printf("\nStudent Name : %s \n",s[i].name);
		printf("Student Percentage : %f \n",s[i].percentage);
		printf("Maximum Percentage : %f \n",Max_Percentage);
		printf("Student Age : %d \n",s[i].age);
	}
}
