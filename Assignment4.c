#include<stdio.h>
int main()
{
	int num1, n1, i, len, count;
	printf("Enter a multiple digit number\n");
	scanf("%d", &num1);
	printf("Enter a single digit number\n");
	scanf("%d", &n1);
	len = get_int_len(num1);
	printf("Length is %d\n", len);
	for (int i = 0; i <= len-1; i++)
	{

		if((num1%10) == n1)
		{
			count = count+1;
		}
		num1 = num1/10;
	}
	printf("%d occurs %d times\n", n1, count);
}
int get_int_len (int value)
{
  	int l=1;
  	while(value>9)
  	{
  	 l++; value/=10; 
  	}
  	return l;
}