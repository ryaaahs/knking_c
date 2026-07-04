// Computes the dimensional weight of a 12" x 10" x 8" box

#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void)
{
	// Declaring variables before use	
	int height, length, width, volume, weight;
	
	// Assigning values via scanf to variables to be used later in the
	// program
	printf("Enter height of box: ");
	scanf("%d", &height);
	printf("Enter length of box: ");
	scanf("%d", &length);
	printf("Enter width of box: ");
	scanf("%d", &width); 
	
	// Computing the values based on business rules
	volume = height * length * width; 
	weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;
	
	// Displaying the information to the user
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimension weight (pounds): %d\n", weight);

	return 0;
}
