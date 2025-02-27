#include<stdio.h>
#include <stdlib.h>
int main()
{
	FILE *p=fopen("tribuwan.txt","w+");
	char n[190];
	gets(n);
	fputs(n,p);
	rewind(p);
	char n1;
	while(fscanf(p,"%c",&n1)==1)
	{
		printf("%c",n1);
	}
	fclose(p);
	return 0;
}
