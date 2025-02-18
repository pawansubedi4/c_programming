#include<stdio.h>
int fib(int a,int b,int n);
int main()
{
	int i;
	printf("enter the size of fib");
	scanf("%d",&i);
	fib(1,1,i);
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
