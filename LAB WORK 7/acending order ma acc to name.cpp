#include<stdio.h>
#include<string.h>
struct person
{
	char name[10],address[10];
	int salary;
};
int main()
{
	struct person pe[5];
	struct person tem;
	int i,j;
	printf("enter name addreess and salary of a person:\n");
	for(i=0;i<5;i++)
	{
		scanf("%s%s%d",&pe[i].name,&pe[i].address,&pe[i].salary);	
	}
	printf("name\taddress\tsalary\n");
	for (i=0;i<5;i++)
	{
		for (j=i+1;j<5;j++)
		{
			if (strcmpi(pe[i].name,pe[j].name)>0)
			{
				tem=pe[i];
				pe[i]=pe[j];
				pe[j]=tem;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%s\t%s\t%d\n",pe[i].name,pe[i].address,pe[i].salary);	
	}
	return 0;
}

