#include <stdio.h>

int main(void)
{
	int x;
	printf("Enter a value for x: ");
	scanf("%d", &x);
	printf("Value of the polynomial: %d\n", (3*(x*x*x*x*x))+(2*(x*x*x*x))-(5*(x*x*x))-(x*x)+(7*x)-6);
	// Honers' rule
	printf("Value of the polynomial: %d\n", ((((3*x+2)*x-5)*x-1)*x+7)*x-6);
	return 0;
} 
