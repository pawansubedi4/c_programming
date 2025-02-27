#include<stdio.h>
struct person
{
	char name[10],address[10];
	int salary;
};
int main()
{
	struct person pe;
	printf("enter name addreess and salary of a person:\n");
	scanf("%s%s%d",&pe.name,&pe.address,&pe.salary);
	printf("The personal detail is :\n");
	printf("name=%s address=%s salary=%d",pe.name,pe.address,pe.salary);
	return 0;
}

