#include <stdio.h>
#define ROWS 3
#define COLS 3
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(void) {
	int A[ROWS][COLS]={
	{2,3,0},
	{8,9,1},
	{7,0,5}};
	
	int B[ROWS][COLS]={
	{1,0,0},
	{0,1,0},
	{0,0,1}};
	
	int C[ROWS][COLS];

	addMatrix(A,B,C);
	printMatrix(C);
	
		
	return 0;
}
int addMatrix(int A[3][3],int B[3][3],int C[3][3]){
	int i,j;
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
	
		C[i][j]=A[i][j]+B[i][j];
	}
	
	return C[i][j];
}
int printMatrix(int a[3][3]){
	int i;
	for(i=0;i<3;i++){
		printf("%d %d %d\n", a[i][0], a[i][1], a[i][2]);
	}
}


