
#include<stdio.h>
#include<string.h>
int main()
{
	char n[10]="KATHMANDU";
	int i,j,k,n1=0;
	for (i=strlen(n);i>0;i=i-2)
	{
		n1=n1+1;
		for(k=1;k<n1;k++)
		{
			printf(" ");
		}
		for (j=0;j<i;j++)
		{
			printf("%c",n[j]);	
		}
		printf("\n");	 
	}
	return 0;
	
}
