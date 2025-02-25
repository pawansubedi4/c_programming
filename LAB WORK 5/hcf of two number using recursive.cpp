#include <stdio.h>
int findhcf(int a, int b);
int findhcf(int a, int b) 
{
	if (b!=0)
	{
		return findhcf(b,a%b);
	}
	else
	{
		return a;
	}
}
int main() 
{
    int num1, num2; 
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("The HCF of %d and %d is: %d\n", num1, num2, findhcf(num1,num2));
    return 0;
}


