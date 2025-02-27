//wap to find the length of vowel letter
#include<stdio.h>
#include<string.h>
int main()
{
	char n[10],i,c=0;
	printf("enter any word:");
	scanf("%s",&n);
	for (i=0;i<=strlen(n);i++)
	{
		if (n[i]=='a'||n[i]=='e'||n[i]=='i'||n[i]=='o'||n[i]=='u')
		{
			c++;	
		}	 
	}
	printf("the number of vowel leter is %d",c);
	return 0;
	
}
