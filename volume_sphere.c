#include <stdio.h>
#define PI 3.14159f

int main(void)
{
	float radius;
	
	// Allow us to grab the value for radius
	printf("Enter value for radius: "); 
	scanf("%f", &radius);
	printf("Volume of sphere = %f \n", 4/3*PI*(radius*radius*radius));

	return 0;	
}
