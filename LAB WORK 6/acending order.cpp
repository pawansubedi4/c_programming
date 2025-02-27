#include<stdio.h>
#include<string.h>
int main()
{
	char c1[5][10];
	int i,j;
	char t[10];
	printf("enter 5 word");
	for(i=0;i<5;i++)
	{
		scanf("%s",c1[i]);
	}
	for(i=0;i<5;i++)
	{
		for (j=i+1;j<5;j++)
		{
			if (strcmpi(c1[i],c1[j])>0)
			{
				strcpy(t,c1[i]);
				strcpy(c1[i],c1[j]);
				strcpy(c1[j],t);	
			}	
		}
		printf("%s\t",c1[i]);	
	}
	return 0;	
}
