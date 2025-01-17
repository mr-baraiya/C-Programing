//3. Swap two numbers using call by value and call by reference.?(A)
#include <stdio.h>
void swapByCallByValue(int, int);
void swapByCallByReference(int*, int*);
void main(){
	int n1,n2;
	printf("Enter the n1 : ");
	scanf("%d",&n1);
	printf("Enter the n2 : ");
	scanf("%d",&n2);
	//call by value   
	swapByCallByValue(n1,n2);// n1,n2 Actual Parameter
	//call by Reference
	swapByCallByReference(&n1,&n2);
	printf("call by reference \n");
	printf("n1 = %d and n2 = %d \n",n1,n2);
}
void swapByCallByValue(int n1, int n2){
	// n1,n2 Formal Parameter
	int temp = n1;
	n1 = n2;
	n2 = temp;
	printf("call by value \n");
	printf("n1 = %d and n2 = %d \n",n1,n2);
}
void swapByCallByReference(int* p1, int* p2){
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
