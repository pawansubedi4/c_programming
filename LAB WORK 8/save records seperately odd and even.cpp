#include<stdio.h>
#include <stdlib.h>
int main()
{
	FILE *q=fopen("even.txt","w");
	FILE *r=fopen("odd.txt","w");
	FILE *p=fopen("number.txt","r");
	int n;
	while(fscanf(p,"%d",&n)==1)
	{
		if (n%2==0)
		{
			fprintf(q,"%d ",n);	
		}
		else
		{
			fprintf(r,"%d ",n);
		}
	}
	fclose(p);
	fclose(q);
	return 0;
}
