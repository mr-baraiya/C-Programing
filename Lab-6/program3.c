//3. Deƒine a structure called Players which describe details like p_name, team, score, 
//average. Write a program to read data for N players and arrange p_name in alphabetical order. (B)
#include <stdio.h>
#include <string.h>

struct Player{
	char p_name[50];
	char team[50];
	int score;
	float average;
};

void main(){
	int n=0;
	printf("Enter the Size Of Array : ");
	scanf("%d",&n);
	struct Player p[n];
	int i=0;
	//Get Details of Players
	for(i=0;i<n;i++){
		getchar();
		printf("Enter the Details Of Player : %d\n",(i+1));
		printf("Enter the Player Name : ");
		gets(p[i].p_name);
		printf("Enter the Team Name : ");
		gets(p[i].team);
		printf("Enter the Score : ");
		scanf("%d",&p[i].score);
		printf("Enter the Average : ");
		scanf("%f",&p[i].average);
	}
	//Sort The Array According to Name Alphabetically Order
	int j=0;
	struct Player temp;
	for (i = 0; i< n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(p[i].p_name, p[j].p_name) > 0) {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
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

