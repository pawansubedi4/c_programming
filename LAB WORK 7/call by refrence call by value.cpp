#include<stdio.h>
void test (int,int *);
int main()
{
	int a=5,b=7;
	printf("\nbefore calling test function a=%d b=%d",a,b);
	test(a,&b);//pass by refrence &b AND pass by value a
	printf("\n after calling test function a=%d b=%d",a,b);
}
void test (int a,int *b)
{
	a=a+5;
	*b=*b+5;
	printf("\ninside test function a=%d b=%d",a,*b);
	
}
