//write a c program to find the numbers which ends with 0 and 1 between 100 to 200
#include<stdio.h>
int main()
{
	int i;
	for(i=100;i<=200;i++)
	{
		if (i%10==0||i%10==1)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
