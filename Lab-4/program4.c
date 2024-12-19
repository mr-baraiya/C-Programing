//4. Demonstrate nested structure.(B)
#include <stdio.h>

struct Address{
	char street_name[30];
	char city[30];
	int pinCode;
};

struct Student{
	int roll;
	char name[30];
	float cpi;
	struct Address address;
};

void main(){
	struct Student s;
	printf("Enter the Student Roll Number : ");
	scanf("%d",&s.roll);
	printf("Enter the Student Name : ");
	gets(s.name);
	gets(s.name);
	printf("Enter the Student CPI : ");
	scanf("%f",&s.cpi);
	printf("Enter the Adsress... \n");
	printf("Enter the Street : ");
	gets(s.address.street_name);
	gets(s.address.street_name);
	printf("Enter the City : ");
	gets(s.address.city);
	printf("Enter the Pin Code : ");
	scanf("%d",&s.address.pinCode);
	
	printf("Roll Number : %d \n",s.roll);
	printf("Name : %s  \n",s.name);
	printf("CPI : %f  \n",s.cpi);
	printf("Address : %s, %s-%d",s.address.street_name,s.address.city,s.address.pinCode);
}
