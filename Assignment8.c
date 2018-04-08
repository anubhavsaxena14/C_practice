#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n,x;
	printf("Enter a number\n");
	scanf("%d", &n);
	x = fibonacci(n);
	printf("x is %d\n", x);
	return 0;
}
int fibonacci(int n)
{
	if((n == 1) || (n == 2))
	{
		return 1;
	}
	else
	{
		return(fibonacci(n-1)+fibonacci(n-2));
	}
}