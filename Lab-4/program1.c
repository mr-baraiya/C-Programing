//1. Create, declare and initialize structure employee. (A)

//Create Structure
struct employee{
	//you can not assign value in structure
	int id;
	char name[30];
	char post[30];
	float salary;
};

void main(){
	//Declare Structure
	struct employee e1={101,"John Doe", "DBA", 25000.00};
	struct employee e2;
	//initialize Structure
	printf("Enter the id Of Employee : ");
	scanf("%d",&e2.id);
	printf("Enter the Name Of Employee : ");
	gets(e2.name);
	gets(e2.name);
	printf("Enter the Post Of Employee : ");
	gets(e2.post);
	printf("Enter the Salary Of Employee : ");
	scanf("%f",&e2.salary);
	
	//Display the Structure
	printf("Employee id : %d \n",e1.id);
	printf("Employee Name : %s \n",e1.name);
	printf("Employee Post : %s \n",e1.post);
	printf("Employee Salary : %f \n",e1.salary);
	
	printf("Employee id : %d \n",e2.id);
	printf("Employee Name : %s \n",e2.name);
	printf("Employee Post : %s \n",e2.post);
	printf("Employee Salary : %f \n",e2.salary);
}
