//6. Add two times hh, mm and ss using structure.(C)
#include <stdio.h>

struct Time{
	int s;
	int m;
	int h;
};

void main(){
	struct Time t1,t2;
	printf("Enter the (hh : mm : ss) Time1 : ");
	scanf("%d %d %d",&t1.h,&t1.m,&t1.s);
	printf("Enter the (hh : mm : ss) Time2 : ");
	scanf("%d %d %d",&t2.h,&t2.m,&t2.s);
	
	//Sum Calculate
	struct Time t;
	t.h = t1.h + t2.h;
	t.m = t1.m + t2.m;
	t.s = t1.s + t2.s;
	//if Seconds is More then 60 Convert into Minites
	if(t.s >= 60){
		t.m += t.s / 60;
		t.s = t.s % 60;
	}
	//if Minites is More then 60 Convert into Hours
	if(t.m >= 60){
		t.h += t.m / 60;
		t.m = t.m % 60;
	}
	printf(" %d : %d : %d ",t.h,t.m,t.s);
}
