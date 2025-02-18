//write c code to print pallindrom from 100 to 500
#include<stdio.h>
int main()
{
	int n,r,s,a;
	for(n=100;n<=500;n++)
	{
		a=n;
		s=0;
		while (a>0)
		{
			r=a%10;
			s=s*10+r;
			a=a/10;	
		}
		if (s==n)
		{
			printf("%d\n",s);
		}	
	}
	return 0;

}
