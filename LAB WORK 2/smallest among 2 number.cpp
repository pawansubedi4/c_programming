#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two number");
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		printf("The smallest is %d",a);
		
	}
	else
	{
		printf("The smallest is %d",b);
	}
	return 0;
}
