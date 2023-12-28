#include<stdio.h>

int factorial(int n)
{
	int fact;
	if(n<=1)
	{
		return 1;
	}
	else
	{
		fact = n * factorial(n-1);
		return fact;
	}
}

void main()
{
	int n;
	
	printf("Enter Value Of Number = ");
	scanf("%d",&n);
	printf("Factorial OF = %d",factorial(n));
}