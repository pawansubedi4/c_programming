#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s,ad;
	printf("enter any number");
	scanf("%f%f",&a,&b);
	c= cbrt(a);
	printf("the cuberoot is %f\n",c);
	s=sqrt(b);
	printf("the squareroot %f\n",s);
	ad=c+s;
	printf("the sum of result is %f\n",ad);
	
	return 0;
	
	
	
} 
