//2. Deƒine a union called Players which describe details like p_name, team, score, average. 
//Write a program to read data for 3 players and print that data. (A)
#include <stdio.h>

union Player{
	char p_name[50];
	char team[50];
	int score;
	float average;
};

void main(){
	int n=3;
	union Player p[n];
	int i=0;
	
	for(i=0;i<n;i++){
		printf("\n");
		
		printf("Enter the Details Of Player : %d\n",(i+1));
		printf("Enter the Player Name : ",(i+1));
		gets(p[i].p_name);
		
		printf("Player Name : %s \n",p[i].p_name);
		printf("Enter the Team Name : ",(i+1));
		gets(p[i].team);
		
		printf("Team Name : %s \n",p[i].team);
		printf("Enter the Score : ",(i+1));
		scanf("%d",&p[i].score);
		
		printf("Score : %d \n",p[i].score);
		printf("Enter the Average : ",(i+1));
		scanf("%f",&p[i].average);
		printf("Average : %f \n",p[i].average);
		
		getchar();
		printf("\n");
	}
}








//void main(){
//	int n=3;
//	union Player p[n];
//	int i=0;	
//	//Get The Player Name
//	for(i=0;i<n;i++){
//		printf("Enter the %d Player Name : ",(i+1));
//		gets(p[i].p_name);
//	}
//	//print the Payer Name
//	printf("\n");
//	for(i=0;i<n;i++){
//		printf("%d. %s",(i+1),p[i].p_name);
//		printf("\n");
//	}
//	//Get The Team Name
//	for(i=0;i<n;i++){
//		printf("Enter the %d Team Name : ",(i+1));
//		gets(p[i].team);
//	}
//	//print the Team Name
//	printf("\n");
//	for(i=0;i<n;i++){
//		printf("%d. %s",(i+1),p[i].team);
//		printf("\n");
//	}
//	//Get The Score
//	for(i=0;i<n;i++){
//		printf("Enter the %d Player Score : ",(i+1));
//		scanf("%d",&p[i].score);
//	}
//	//print the Score
//	printf("\n");
//	for(i=0;i<n;i++){
//		printf("%d. %d",(i+1),p[i].score);
//		printf("\n");
//	}
//	//Get The Average
//	for(i=0;i<n;i++){
//		printf("Enter the %d Player Average : ",(i+1));
//		scanf("%f",&p[i].average);
//	}
//	//print the Average
//	printf("\n");
//	for(i=0;i<n;i++){
//		printf("%d. %f",(i+1),p[i].average);
//		printf("\n");
//	}
//}

