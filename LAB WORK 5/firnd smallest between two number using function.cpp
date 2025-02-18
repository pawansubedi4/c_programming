#include<stdio.h>
int check(int a,int b);
int main()
{
	int a,b;
	printf("enter any number two number:");
	scanf("%d%d",&a,&b);
	check(a,b);
	return 0;	
}
int check(int a,int b)
{
	if (a<b)
	{
		printf("%d is smallest",a);
	}
	else
	{
		printf("%d is smallest",b);
	}
	return 0;
}
