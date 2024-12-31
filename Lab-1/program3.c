//3. Count simple interest using function.?(A) (I=(p*t*r)/100)

#include <stdio.h>

void countSimpleInterest(int, int, int);

void main(){
	int p,r,t;
	printf("Enter the Principal amount : ");
	scanf("%d",&p);
	printf("Enter the Rate Of Interest : ");
	scanf("%d",&r);
	printf("Enter the Time (In year) : ");
	scanf("%d",&t);
	countSimpleInterest(p,r,t);
}

void countSimpleInterest(int p,int r,int t){
	float interest = (p*r*t)/100.0;]
	
	printf("Interest = %f",interest);
}
