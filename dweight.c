// Computes the dimensional weight of a 12" x 10" x 8" box

#include <stdio.h>

int main(void)
{
	// Declaring variables before use	
	int volume;
	int height = 8;
	int length = 12;
	int width = 10;
		
	// Assigning values to variables to be used later in the
	// program
	height = 8; 
	length = 12; 
	width = 10; 
	
	// Computing the values based on business rules
	volume = height * length * width; 
	
	// Displaying thei information to the user
	printf("Dimensions: %dx%dx%d\n", length, width, height);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimension weight (pounds): %d\n", (volume + 165) / 166);

	return 0;
}
