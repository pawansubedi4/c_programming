//wap to find the length of vowel letter
#include<stdio.h>
#include<string.h>
int main()
{
	char n[10],n1[10],n2[10];
	int a,b,c;
	printf("enter any three word :");
	scanf("%s%s%s",&n,&n1,&n2);
	a=strlen(n);
	b=strlen(n1);
	c=strlen(n2);
	if (a<=b&&a<=c)
	{
		printf("the shortest word is %s",n);
	}
	else if(b<=a&&b<=c)
	{
		printf("the shortest word is %s",n1);
	}
	else
	{
		printf("the shortest word is %s",n2);
	}
	
	return 0;
	
}
