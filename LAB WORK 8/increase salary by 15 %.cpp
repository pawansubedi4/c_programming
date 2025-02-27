#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
	FILE *p=fopen("univers.txt","r");
	FILE *q=fopen("xyz.txt","w");
	char name[100],address[100];
	int salary,newsalary;
	while(!feof(p))
	{
		fscanf(p,"%s %s %d\n",&name,&address,&salary);
		newsalary=salary+0.15*salary;
		fprintf(q,"%s %s %d\n",name,address,newsalary);
	}
	fclose(p);
	fclose(q);
	remove("univers.txt");
	rename("xyz.txt","univers.txt");
	return 0;
}
