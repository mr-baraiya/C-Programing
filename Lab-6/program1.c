// 1. Deƒne a structure called Players which describe details like p_name, team, score, average.
// Write a program to read data for 3 players and print that data. (A)

#include <stdio.h>

struct Player{
	char p_name[50];
	char team[50];
	int score;
	float average;
};

void main(){
	int n=3;
	struct Player p[n];
	int i=0;
	//Get Details of Players
	for(i=0;i<n;i++){
		printf("Enter the Details Of Player : %d\n",(i+1));
		printf("Enter the Player Name : ",(i+1));
		if(i!=0){
			gets(p[i].p_name);
		}
		gets(p[i].p_name);
		printf("Enter the Team Name : ",(i+1));
		gets(p[i].team);
		printf("Enter the Score : ",(i+1));
		scanf("%d",&p[i].score);
		printf("Enter the Average : ",(i+1));
		scanf("%f",&p[i].average);
	}
	
	//print Student Details
	for(i=0;i<n;i++){
		printPlayerDetails(p[i]);
	}
}

void printPlayerDetails(struct Player p){
	printf("\n");
	printf("Player Name : %s \n",p.p_name);
	printf("Team Name : %s \n",p.team);
	printf("Score : %d \n",p.score);
	printf("Average : %f \n",p.average);
	printf("\n");
}

