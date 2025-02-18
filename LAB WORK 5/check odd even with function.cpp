#include<stdio.h>
void check(int n);
int main()
{
	int n;
	printf("enter any number :");
	scanf("%d",&n);
	check(n);
	return 0;	
}
void check(int n)
{
	if (n%2==0)
	{
		printf("%d is even",n);
	}
	else
	{
		printf("%d is odd",n);
	}
}
