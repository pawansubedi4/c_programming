//N
//NE
//NEP
//NEPA
//NEPAL
#include<stdio.h>
#include<string.h>
int main()
{
	char n[10]="NEPAL";
	int i,j;
	for (i=0;i<strlen(n);i++)
	{
		for (j=0;j<=i;j++)
		{
			printf("%c",n[j]);	
		}
		printf("\n");	 
	}
	return 0;
	
}
