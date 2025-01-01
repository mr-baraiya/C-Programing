//3.Print weekday based on given number.
#include <stdio.h>
void main(){
	int n=0;
	printf("Enter the Number : ");
	scanf("%d",&n);
	n = n % 7;
	switch(n){
		case 0:
			printf("Sunday");
			break;
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wedesday");
			break;
		case 4:
			printf("Thurseday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Satureday");
			break;
		default:
			printf("Wrong Input!");
			break;
	}
}
