//    *
//   ***
//  *****
// *******
//*********
#include<stdio.h>
int main()
{
	int i,j,k,n=5;
	for(i=1;i<=9;i=i+2)
	{
		n=n-1;
		for (k=1;k<=n;k++)
		{
			printf(" ");
		}
		for (j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
