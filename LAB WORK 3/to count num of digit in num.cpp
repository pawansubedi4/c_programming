//write c code to count number of digit of any number
#include<stdio.h>
int main()
{
	int n,i,r;
	printf("enter any number");
	scanf("%d",&n);
	while (n>0)
	{
		i++;
		n=n/10;	
	}
	printf("the number of digit is %d",i);
}
