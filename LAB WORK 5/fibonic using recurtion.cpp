#include<stdio.h>
int fib(int a,int b,int n);
int main()
{
	fib(1,1,10);
	return 0;
}
int fib(int a,int b,int n)
{
	if (n>0)
	{
		printf("%d\t",a);
	    return fib(b,a+b,n-1);
		
	}
	else
	{
		return 0;
	}
}
