#include<stdio.h>
int main()
{
	int i, count = 1, prev, curr, max = 0;
	printf("Enter a number");
	scanf("%d", &prev);
	for(i = 0; i < 10; i++)
	{
		printf("Enter a number");
		scanf("%d", &curr);
		if(curr > prev)
		{
			count += 1;
		}
		else if(count > max)
		{
			max = count;
			count=1;
		}
		else
			count=1;
		prev = curr;
	}
	if(count > max)
	{
		printf("count is %d\n", count);
	}
	else
	{
		printf("%d\n", max);
	}
}
