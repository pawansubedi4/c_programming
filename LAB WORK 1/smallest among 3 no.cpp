#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter any number");
	scanf("%d%d%d",&a,&b,&c);
	a<b&&a<c?printf("the smallest is %d",a):b<a&&b<c?printf("the smallest is %d",b):printf("the smallest is %d",c);
	return 0;
	
	
	
} 
