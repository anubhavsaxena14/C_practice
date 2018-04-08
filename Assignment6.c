#include<stdio.h>
#include<math.h>
int main()
{
	int n,x;
	printf("Enter a number\n");
	scanf("%d", &n);
	x = (2^n)/(fact(n));
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