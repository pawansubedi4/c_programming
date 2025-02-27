#include<stdio.h>
#include <stdlib.h>
int main()
{
	FILE *p=fopen("tu.txt","r");
	FILE *q=fopen("university.txt","w");
	char n;
	while(fscanf(p,"%c",&n)==1)
	{
		fprintf(q,"%c",n);
	}
	fclose(p);
	fclose(q);
	return 0;
}
