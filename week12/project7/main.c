#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char **proverb="All that glisters is not gold.";

void setPointer(char *p){
	char *q=&p;
	**proverb=*q;
}
int main(void) {
	char p="zzz";
	setPointer(p);
	char *q=&p;
	char **proverb=&q;
	printf("%s\n",p);
	return 0;
}

