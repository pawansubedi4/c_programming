//*******
// *****
//  ***
//   *
#include<stdio.h>
int main()
{
	int i,j,k,n=1;
	for(i=1;i<=7;i=i+2)
	{
		n=n+1;
		for (k=1;k<n;k++)
		{
			printf(" ");	
		}
		for (j=i;j<=7;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
