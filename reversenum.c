#include <stdio.h>
 
int reversDigits(int num)
{
    int rev_num = 0;
    while(num > 0)
    {
        rev_num = rev_num*10 + num%10;
        num = num/10;
    }
    return rev_num;
}
int main()
{
    int num;
    printf("Enter number\n");
    scanf("%d", &num);
    printf("Reverse of no. is %d\n", reversDigits(num));
    getchar();
    return 0;
}