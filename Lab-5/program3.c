//3. Create structure student with name, percentage and age. Read data of N students using 
//array of structure. Arrange student data alphabetically and print all data.(B)
#include <stdio.h>
#include <string.h>
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
		getchar();
		printf("\nEnter the Student%d Name : ",(i+1));
		gets(s[i].name);
		printf("Enter the Student%d Percentages : ",(i+1));
		scanf("%f",&s[i].percentage);
		printf("Enter the Student%d Age : ",(i+1));
		scanf("%d",&s[i].age);
	}
	//Sort The Array According to Name Alphabetically Order
	int j=0;
	struct Student temp;
	for (i = 0; i< n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(s[i].name, s[j].name) > 0) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
	//Display The Details Of Students
	for(i=0;i<n;i++){
		printf("\nStudent Name : %s \n",s[i].name);
		printf("Student Percentage : %f \n",s[i].percentage);
		printf("Student Age : %d \n",s[i].age);
	}
}
