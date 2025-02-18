#include<stdio.h>
int a=1,b=1,c;
void fib(int i);
int main()
{
	int n;
	printf("enter the number of fibonic series:");
	scanf("%d",&n);
	fib(n);
	return 0;
}
void fib(int i)
{
	for (int j=0;j<i;j++)
	{
		printf("%d \t",a);
		c=a+b;
		a=b;
		b=c;
		
	}
}
