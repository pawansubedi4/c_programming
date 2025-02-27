#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
	char name[100],address[100];
	int salary,choice;
	printf("1.Add records\n");
	printf("2.display records\n");
	printf("enter yours choice 1 and 2 only: ");
	scanf("%d",&choice);
	if (choice==1)
	{
		FILE *q=fopen("univers.txt","a");
		printf("enter name address salary:");
		scanf("%s%s%d",&name,&address,&salary);
		fprintf(q,"%s %s %d\n",name,address,salary);
		fclose(q);
	}
	else
	{
		FILE *p=fopen("univers.txt","r");
		while(!feof(p))
		{
			fscanf(p,"%s %s %d\n",&name,&address,&salary);
			printf("%s %s %d\n",name,address,salary);
		}
		fclose(p);
	}
	return 0;
}
