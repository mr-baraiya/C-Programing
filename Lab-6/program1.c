// 1. Deƒine a structure called Players which describe details like p_name, team, score, average.
// Write a program to read data for 3 players and print that data. (A)
#include <stdio.h>
struct Player{
	char p_name[50];
	char team[50];
	int score;
	float average;
};
void main(){
	struct Player p[3];
	int i=0;
	//Get Details of Players
	for(i=0;i<3;i++){
		printf("Enter the Details Of Player : %d\n",(i+1));
		printf("Enter the Player Name : ");
		gets(p[i].p_name);
		printf("Enter the Team Name : ");
		gets(p[i].team);
		printf("Enter the Score : ");
		scanf("%d",&p[i].score);
		printf("Enter the Average : ");
		scanf("%f",&p[i].average);
		getchar();
	}
	
	//print Student Details
	for(i=0;i<3;i++){
		printf("Player Name : %s \n",p[i].p_name);
		printf("Team Name : %s \n",p[i].team);
		printf("Score : %d \n",p[i].score);
		printf("Average : %f \n",p[i].average);
		printf("\n");
	}
}
