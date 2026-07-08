#include <stdio.h>

int main(void)
{
	float loan, rate, payment;
	printf("Enter amount of loan: ");
	scanf("%f", &loan); 
	printf("Enter interest rate: ");
	scanf("%f", &rate); 
	printf("Enter monthly payment: ");
	scanf("%f", &payment); 
	
	rate = rate / 100;
	loan = loan + (loan * (rate / 12));
	loan = loan - payment;	
	printf("Balance remaining after first payment: %.2f\n", loan);

	loan = loan + (loan * (rate / 12));
	loan = loan - payment;	
	printf("Balance remaining after second payment: %.2f\n", loan);
	
	loan = loan + (loan * (rate / 12));
	loan = loan - payment;	
	printf("Balance remaining after third payment: %.2f\n", loan);
	
	return 0;
}
