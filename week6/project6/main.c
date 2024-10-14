#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num,i;
	int answer=50;
	
	do{
	printf("Guess a number:");
	scanf("%i", &num);

	

	if (num>answer)
		{
		printf("High!\n");
		i++;}
		
	else if (num<answer)
		{
		printf("Low!\n");
		
		i++;}
		
	else
		printf("Congratulations! trials: %i", i);
		
		
	}while(num!=answer);
	
	
	
	
	return 0;
}
