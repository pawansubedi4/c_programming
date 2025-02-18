#include<stdio.h>
int main()
{
	int a,i,sum=0,sum1=0;
	printf("enter size of array: ");
	scanf("%d",&a);
	int n[a];
	for (i=0;i<a;i++)
	{
		scanf("%d",&n[i]);
		if (n[i]%2==0)
		{
			sum=sum+n[i];
		}
		else
		{
			sum1=sum1+n[i];
		}
	}
	printf("the sum of even number is %d\n",sum);
	printf("the sum of odd number is %d",sum1);
}
