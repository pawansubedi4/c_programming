//write a c code to print number from 100 to 200
#include<stdio.h>
#include<math.h>
int main()
{
	int j,i,r;
	for (i=100;i<=200;i++)
	{
		r=0;
		for(j=2;j<=(sqrt(i));j++)
		{
			if (i%j==0)
			{
				r++;
				break;
			}
			
		}
		if (r==0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
