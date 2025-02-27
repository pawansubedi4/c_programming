//wap to find the length of vowel letter
#include<stdio.h>
#include<string.h>
int main()
{
	char n[10],a[10];
	printf("enter any word:");
	scanf("%s",&n);
	strcpy(a,n);
	strrev(n);
	if (strcmpi(n,a)==0)
	{
		printf("it is palindrom");
	}
	else
	{
		printf("it is not palindrom");
	}
	return 0;
	
}
