#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	int min, sec;
	
	
	printf("Input te second :");
	scanf("%i",&num);
	
	min=num/60;
	sec=num%60;
	
	printf("The time is %d : %d", min,sec);
	return 0;
	
}
