#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct student{
	int ID;
	char name[20];
	float grade;
};
int main(void) {
	struct student s={24, "Eunju", 4.3};
	
	s.ID=21;
	s.name[0]='K';
	s.grade=4.2;
	
	printf("ID: %d\n",s.ID);
	printf("name: %s\n",s.name);
	printf("grade: %f\n",s.grade);
	
	return 0;
}
