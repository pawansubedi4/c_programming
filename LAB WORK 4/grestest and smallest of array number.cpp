#include<stdio.h>
int main()
{
	int a,i,t,j,sum=0,sum1=0;
	printf("enter size of array: ");
	scanf("%d",&a);
	int n[a];
	for (i=0;i<a;i++)
	{
		scanf("%d",&n[i]);
	}
	for (i=0;i<a;i++)
	{
		for(j=i+1;j<a;j++)
		{
			if (n[i]>n[j])
			{
			t=n[i];
			n[i]=n[j];
			n[j]=t;
			}
		}
	}
	printf("the greatest number is %d\n",n[a-1]);
	printf("the smallest number is %d",n[0]);
}
