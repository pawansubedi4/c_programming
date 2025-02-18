#include<stdio.h>
void count_digit(int n);
int main()
{
	int n;
	printf("enter any number :");
	scanf("%d",&n);
	count_digit(n);
	return 0;	
}
void count_digit(int n)
{
	int r,c=0;
	while (n!=0)
	{
		c++;
		n=n/10;	
	}
	printf("the number of digit is %d",c);
}
