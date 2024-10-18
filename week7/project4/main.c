#include <stdio.h>
int combination(int n,int r)
{
	return factorial(n)/factorial(n-r)/factorial(r);
}
int factorial(int i)
{
	int res1=1;
	for(i;i>1;i--)
	res1 *=i;
	return res1;
}
int get_integer(int a)
{
	printf("Enter the value:");
	scanf("%i", &a);
	return a;
}
int main(void) {
	
	int n, r, res;
	
	printf("Enter the value:");
	scanf("%i", &n);
	
	printf("Enter the value:");
	scanf("%i", &r);
	
	res=combination(n,r);
	
	printf("The result of C(%i,%i) is %i", n, r, res);
	return 0;
}
