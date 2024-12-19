//5. Add two distances in feet and inches using structure.(C)
#include <stdio.h>
struct Distance
{
    int feet;
    int inches;
};

void main(){
	struct Distance d1,d2;
	printf("Enter the (Feet and Inches) Distance1 : ");
	scanf("%d %d",&d1.feet,&d1.inches);
	printf("Enter the (Feet and Inches) Distance2 : ");
	scanf("%d %d",&d2.feet,&d2.inches);
	
	struct Distance sum;
	sum.feet = d1.feet + d2.feet;
	sum.inches = d1.inches + d2.inches;
	if (sum.inches >= 12){
        sum.feet += sum.inches/12;
        sum.inches = sum.inches%12;
    }

	printf("%d Feets and %d Inches",sum.feet,sum.inches);
}
