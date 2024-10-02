#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int year, res;
	
	
	
	printf("Input the year :");
	scanf("%i", &year);
	
	res=(year/4==0)||(year/100!=0);
	
	printf("Is the year %d the leap year? %d", year, res);

	return 0;
}
