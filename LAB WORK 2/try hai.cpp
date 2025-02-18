#include<stdio.h>
#include<conio.h>
int main()
{
	int d,p,w,r;
	printf("enter the amount of water in 1st day (in litres)");
	scanf("%d",&w);
	printf("enter the percentage:");
	scanf("%d",&p);
	while (w>100&&d<30)
	{
		r=w*p/100;
		w=w-r;
		d++;
		printf("The quantity deducted from %d day is %d \n",d,r);
		printf("The remmaining water in well is %d\n",w);	
	}
	return 0;
}
