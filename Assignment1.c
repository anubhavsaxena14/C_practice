#include<stdio.h>
int main()
{
	int sub1, sub2, sub3, avg, a, b, c;
	printf("Enter marks of sub1");
	scanf("%d", &sub1);
	printf("Enter marks of sub2");
	scanf("%d", &sub2);
	printf("Enter marks of sub3");
	a = sub1-50;
	b = sub2-50;
	c = sub3-50;
	scanf("%d", &sub3);
	avg = (sub1+sub2+sub3)/3;
	if ((sub1>50)&(sub2>50)&(sub3>50))
	{
		printf("Avg is %d \n",avg);
		printf("Passed\n");
	}
	else if (avg<50)
	{
		printf("Avg is %d \n",avg);
		printf("Failed\n");
	}
	else if (avg>50)
	{
		if ((a>0)&(b>0)&(c<0) || (b>0)&(c>0)&(a<0) || (a>0)&(c>0)&(b<0))
		{
			printf("Avg is %d \n",avg);
			printf("Passed Gracefully\n");
		}
		else
		{
			printf("Failed\n");
		}
	}
}