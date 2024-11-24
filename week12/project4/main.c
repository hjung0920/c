#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int i,sum,ave;
	int grade[5];
	
	for(i=0;i<5;i++)
	{
		printf("Input value-grade[%i]=",i);
		scanf("%d",&grade[i]);
		sum+=grade[i];
		ave=sum/5;
	}
    char *ptr;
	ptr=&grade[5];
	

	for(i=0;i<5;i++){
		
		printf("grade[%i]=%d\n", i,grade[i]);
	}
	printf("average:%d\n",ave);
	return 0;
}
