//3. Find power of any number using recursion.?(A)
#include <stdio.h>

int pow(int ,int);

void main (){
	int base = 0,power = 0;
	printf("Enetr the number : ");
	scanf("%d",&base);
	printf("Enetr the power : ");
	scanf("%d",&power);
	int ans = pow(base,power);
	printf("%d power %d = %d",base,power,ans);
}
int pow(int base,int power){
	if(power == 0){
		return 1;
	}
	else{
		return base * pow(base,power-1);
	}
}
