//2. Deƒne a union called Players which describe details like p_name, team, score, average. 
//Write a program to read data for 3 players and print that data. (A)
#include <stdio.h>
#include<string.h>

union Player{
	char p_name[50];
	char team[50];
	int score;
	float average;
};

void main(){
	int n=3;
	union Player p[n];
	
	char Pname[n][50];
	char Team[n][50];
	int Score[n];
	float Average[n];
	
	int i=0;
	//Get Details of Players
	for(i=0;i<n;i++){
		printf("Enter the Details Of Player : %d\n",(i+1));
		printf("Enter the Player Name : ",(i+1));
		if(i!=0){
			gets(Pname[i]);
		}
		gets(Pname[i]);
		printf("Enter the Team Name : ",(i+1));
		gets(Team[i]);
		printf("Enter the Score : ",(i+1));
		scanf("%d",&Score[i]);
		printf("Enter the Average : ",(i+1));
		scanf("%f",&Average[i]);
	}
	//copy in union
	for(i=0;i<n;i++){
		strcpy(p[i].p_name,Pname[i]);
		strcpy(p[i].team,Team[i]);
		p[i].score = Score[i];
		p[i].average = Average[i];
	}
	//print Student Details
	for(i=0;i<n;i++){
		printf("\n");
		printf("Player Name : %s \n",p[i].p_name);
		printf("Team Name : %s \n",p[i].team);
		printf("Score : %d \n",p[i].score);
		printf("Average : %f \n",p[i].average);
		printf("\n");
	}
}

