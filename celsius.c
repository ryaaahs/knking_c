// Converts Fahrenheit temperature to Celsius

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
	float fahrenheit, celsius;
	
	// Allow the user to enter the value to convert
	printf("Enter Fahrenheit temperature: ");
	scanf("%f", &fahrenheit);

	// Apply the conversion using an expression that contains 
	// Macro definitions
	celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
	
	// Display the result to the user
	printf("Celsius equivalent: %.1f\n", celsius);

	return 0;
}
