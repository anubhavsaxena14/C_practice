#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	float x;
	printf("Enter a number\n");
	scanf("%d", &n);
	x = (power(2,n))/(fact(n));
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
