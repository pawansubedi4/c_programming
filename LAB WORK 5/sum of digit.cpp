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
	int r,sum=0;
	while (n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;	
	}
	printf("the sum of digit is %d",sum);
}
