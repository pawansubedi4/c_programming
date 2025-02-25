#include<stdio.h>
int main()
{
	int n[5],c=0;
	printf("enter elements for ");
	for (int a=0;a<5;a++)
	{
		scanf("%d",&n[a]);
		if ((n[a]+a)%2==1)
		{
			c++;
		}
	}
	if (c==0)
	{
		printf("it is good array");
	}
	else
	{
		printf("it is bad array");
	}
	return 0;
}
