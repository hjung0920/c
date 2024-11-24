#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	char str1[100];
	char str2[100];
	char str3[100];
	
	FILE *fp;
	fp=fopen("sample.txt","w");
	
	printf("Input a word:");
	scanf("%s",&str1);
	fprintf(fp,"%s",str1);
	
	printf("Input a word:");
	scanf("%s",&str2);
	fprintf(fp,"%s",str2);
	
	printf("Input a word:");
	scanf("%s",&str3);
	fprintf(fp,"%s",str3);
	
	fclose(fp);
	

	return 0;
}
