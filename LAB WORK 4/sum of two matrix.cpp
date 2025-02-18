#include<stdio.h>
int main()
{
	int a,b,i,j;
	printf("enter size of matric:(rXc) ");
	scanf("%d%d",&a,&b);
	int n1[a][b];
	int n2[a][b];
	int sum[a][b];
	printf("enter elements of 1st matrix");
	for (i=0;i<a;i++)
	{
		for (j=0;j<b;j++)
		{
			scanf("%d",&n1[i][j]);
		}
	}
	printf("enter elements of 2nd matrix");
	for (i=0;i<a;i++)
	{
		for (j=0;j<b;j++)
		{
			scanf("%d",&n2[i][j]);
		}
	}
	printf("the result is:\n");
	for (i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			sum[i][j]=n1[i][j]+n2[i][j];
			printf("%d\t",sum[i][j]);

		}
		printf("\n");
	}
}
