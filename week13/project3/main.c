#include <stdio.h>
#define STUDENTNUM 4

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct student{
	int ID;
	int score;
};
void main(void) {
	struct student s[STUDENTNUM];
	int i, max;
	double sum, ave;
	
	for(i=0;i<STUDENTNUM;i++){
		printf("Input the ID:");
		scanf("%d", &s[i].ID);
		printf("Input the score:");
		scanf("%d", &s[i].score);
		
		sum+=s[i].score;
		
		if(s[i].score>s[max].score)
		max=i;
	}
	
	ave=sum/4;
	
	printf("The average of the score: %f\n", ave);
	printf("The highest score - ID: %d, score: %d", s[max].ID, s[max].score);
	
}
