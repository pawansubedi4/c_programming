#include<stdio.h>
int main()
{
	int n,a,sum;
	printf("enter unit of electricity:");
	scanf("%d",&n);
	if(n<=20&&n>=0)
	{
		sum=0;
		
	}
	else if(n>120)
	{
		n=n-20;
		sum=12*n;
		
	}
	else if(n>220)
	{
		n=n-120;
		sum=12*100+11*n;
		
	}
	else
	{
		n=n-220;
		sum=12*100+100*11+10*n;
		
	}
	printf("The bill amount is %d",sum);
	return 0;
}
