#include<stdio.h>
struct person
{
	char name[10],address[10];
	int salary;
};
int main()
{
	
	struct person pe[10];
	struct person tem;
	int i,j;
	printf("enter name addreess and salary of a person:\n");
	for(i=0;i<10;i++)
	{
		scanf("%s%s%d",&pe[i].name,&pe[i].address,&pe[i].salary);	
	}
	
	printf("The higest paid personal detail is :\n");
	for (i=0;i<10;i++)
	{
		for (j=i+1;j<10;j++)
		{
			if (pe[i].salary>pe[j].salary)
			{
				tem=pe[i];
				pe[i]=pe[j];
				pe[j]=tem;
			}
		}
	}
	printf("name=%s address=%s salary=%d",pe[9].name,pe[9].address,pe[9].salary);
	return 0;
}

