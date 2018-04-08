#include<stdio.h>
int main()
{
	float x,n;
	printf("Enter a number\n");
	scanf("%f", &n);
	x = (power(2,n))/(fact(n));
	printf("x is %f\n",x);
}
int fact(float n)
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
int power(float a, float b)
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
