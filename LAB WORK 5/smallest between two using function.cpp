#include<stdio.h>
int check(int a,int b);
int main()
{
	int a,b;
	printf("enter any number two number:");
	scanf("%d%d",&a,&b);
	printf("%d is smallest",check(a,b));
	return 0;	
}
int check(int a,int b)
{
	if (a<b)
	{
		return a;
	}
	else
	{
		return b;
	}
	return 0;
}
