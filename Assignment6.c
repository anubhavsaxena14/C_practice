#include<stdio.h>
int main()
{
	float x;
	int n;
	printf("Enter a number\n");
	scanf("%d", &n);
	x = (power(2,n)) * 1.0 / (fact(n)) * 1.0;
	printf("x is %f\n",x);
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
int power(int a, int b)
{
	if(b == 1)
	{
		return 2;
	}
	else
	{
	return (a*power(a,b-1));	
	}
}
