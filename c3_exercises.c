#include <stdio.h>

int main(void)
{
	float x = 10.0f;

	// e1
	printf("%6d, %4d\n", 86, 1040);
	printf("%12.5e\n", 30.253);
	printf("%.4f\n", 83.162);
	printf("%-6.2g\n", .000009979);
	
	// e2
	printf("%-8.1e", x);
	printf("%10.6e", x);
	printf("%-8.3f", x);
	printf("%6.0f", x);

	// e3
	// "%d" vs " %d"
	// These are the same, scanf will skip over the whitespace character
	// and insert the value
	//
	// "%d-%d-%d" vs "%d -%d -%d"
	// Not the same, if inserted as 5 -5 -5 for the first one, it will attempt
	// to match the hyphon to the space and terminate the rest of the read.
	//
	// "%f" vs "%f "
	// These are the same, as the scanf will ignore the whitespace
	//
	// "%f,%f" vs "%f, %f"
	// These are the same, as the white space will be ignored
	//

	// e4
	// scanf("%d%f%d", &i, &x, &j);
	// enter values are 10.3 5 6
	// i, j are integers
	// x is a float
	//
	// The values will be 10 0.3 5
	// As scanf is looking for an integer first, so it grabs the first two characters
	// (10), then will look for a float, which it will match with (.3 == 0.3). Lastly, 
	// the final integer will be filled by (5)
	// The 6 will be read by the next scanf call
	
	// e5
	// scanf("%f%d%f", %x, %i, &y);
	// enter values are 12.3 45.6 789
	// x, y are floats
	// i is an integer
	//
	// The values will be 12.3 45 0.6
	// The scanf looked for a float first, this is captured by the characters 12.3
	// The scanf looks for a integer next, this is captured by the 45, and it stops 
	// reading when it hits the .
	// Lasty, its looking for another float, this is captured by the .6 == 0.6
	// The 789 will be captured by the next scanf call
	
	// e6
	// It will be updated to the following
	// scanf("%d /%d", &num1, &denom1);
	// scanf("%d /%d", &num2, &denom2);
	//
	// The reason for this case, is that if they enter 3 / 3, the whitespace after the /
	// will be ignored

	return 0;
}
