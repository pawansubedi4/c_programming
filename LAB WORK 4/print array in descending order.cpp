#include<stdio.h>
int main()
{
	int a,i,t,j;
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
			if (n[i]<n[j])
			{
			t=n[i];
			n[i]=n[j];
			n[j]=t;
			}
		}
	}
	printf("the numbers in descending order is");
	for (i=0;i<a;i++)
	{
		printf("%d\n",n[i]);
	}
}
