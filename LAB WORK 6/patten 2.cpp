//  p
// epa
//nepal  
#include<stdio.h>
#include<string.h>
int main()
{
	char n[10]="NEPAL";
	int i,j,k,l,cf=3;
	for (i=0;i<3;i++)
	{
		cf=cf-1;
		for(k=0;k<cf;k++)
		{
			printf(" ");	
		}
		for (j=2-i;j<=2+i;j++)
		{
			printf("%c",n[j]);	
		}
		printf("\n");	 
	}
	return 0;
	
}
