#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct point{
	int x;
	int y;
};

int getArea(struct point *pPtr1, struct point *pPtr2)
{
	
	return (pPtr2->x-pPtr1->x)*(pPtr2->y-pPtr1->y);
	
};

int main(int argc, char *argv[]) {
	
	struct point p1, p2;
	struct point *pPtr1 = &p1;
	struct point *pPtr2 = &p2;
	
	
	printf("Input the coordinate p1 (x y):");
	scanf("%d %d", &p1.x, &p1.y);
	printf("Input the coordinate p2 (x y):");
	scanf("%d %d", &p2.x, &p2.y);
	
	int area = getArea(pPtr1, pPtr2);
	
	printf("Area: %d\n", area);
	
	return 0;
}
