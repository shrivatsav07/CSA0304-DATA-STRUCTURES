#include<stdio.h>
int factorial(int n)
{
	if (n==0)
	{
		return 1;
	}
	else
	{
		return(n*factorial(n-1));
	}
}

int main()
{
	int num;
	int fact;
	printf("Enter a number:");
	scanf("%d", &num);
	
	fact=factorial(num);
	printf("Factorial of %d is %d\n", num, fact);
	return 0;
}
