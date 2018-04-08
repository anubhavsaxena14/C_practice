#include<stdio.h>
int main()
{
int x,y;
printf("Enter value of x\n");
scanf("%d", &x);
printf("Enter value of y\n");
scanf("%d", &y);
if((x==0)&(y==0))
{
  printf("Lies on Origin\n");
}
else if(x>0)
  {
    if(y>0)
    {
      printf("First Quadrant\n"); 
    }
    if(y<0)
    {
      printf("Forth Quadrant\n");
    }
  }
else if((x<0))
  {
    if(y>0)
    {
      printf("Second Quadrant\n");
    }
    if(y<0)
    {
    printf("Third Quadrant\n");
    }
  }
}  
