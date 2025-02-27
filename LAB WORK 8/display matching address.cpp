#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
	FILE *p=fopen("univers.txt","r");
	char name[100],address[100],add[100];
	int salary;
	printf("enter address");
	scanf("%s",&add);
	while(!feof(p))
	{
		fscanf(p,"%s %s %d\n",&name,&address,&salary);
		if (strcmpi(add,address)==0)
		{
			printf("%s %s %d\n",name,address,salary);
		}
	}
	fclose(p);
	return 0;
}
