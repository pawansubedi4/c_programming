#include<stdio.h>
void check(int n[100],int a);
int i,j;
int main()
{
	int n;
	int a[100];
	printf("enter how many number do you want:");
	scanf("%d",&n);
	printf("enter %d number",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	check(a,n);
	return 0;	
}
void check(int n[100],int a)
{
	int t;
	for(i=0;i<a;i++)
	{
		for(j=i+1;j<a;j++)
		{
			if(n[i]>n[j])
			{
				t=n[i];
				n[i]=n[j];
				n[j]=t;
			}
		}
	}
	printf("the smallest is %d",n[0]);
}
