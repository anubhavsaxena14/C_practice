#include<stdio.h>
int main()
{
	int n,x;
	printf("Enter a number\n");
	scanf("%d", &n);
	x = fact(1+(n-1)*3);
	printf("x is %d\n",x);
}
int fact(int n)
{	
	if(n == 1)
	{
		return 1;
	}
	else
	{
		return(n*fact(n-1));	
	}
}