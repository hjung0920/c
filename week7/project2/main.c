#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sumTwo(int a, int b)
{
	int res1;
	res1=a+b;
	return res1;
	
}

int square(int n)
{
	int res2;
	res2=n*n;
	return res2;
}

int get_max(int x, int y)
{
		if (x>y)
		return x;
		
		else if(x<y)
		return y;
		
		else
		return x;
	

}
int main(void)
{
	int num1, num2;
	int res1, res2, res3;

	printf("Enter the integers:");
	scanf("%i %i", &num1, &num2);
	
	res1=sumTwo(num1,num2);
	res2=square(num1);
	res3=get_max(num1, num2);
	
	printf("Result - Sum: %i, Square: %i, Max: %i", res1, res2, res3 );

	return 0;

}
