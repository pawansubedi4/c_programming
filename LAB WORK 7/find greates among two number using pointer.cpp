#include<stdio.h>
int main()
{
	int a,b;
	int *p=&a,*q=&b;
	printf("enter any two number");
	scanf("%d%d",p,q);
	if (*p>*q)
	{
		printf("%d is greater",*p);
	}
	else
	{
		printf("%d is greater",*q);
	}
}
