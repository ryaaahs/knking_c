#include <stdio.h>

int main(void) 
{
	int i;
	float x;

	i = 40;
	x = 839.21f;
	
	// %d    -Displays i in deciaml form, using the minimum amount of space
	// %5d   -Displays i in decimal form, using a minimum of five characters.
	// 	Since i requires only two characters, three spaces were added
	// %-5d  -Displays i in decimal form, using the minimum of five characters;
	// 	since the value of i does not require five characters, the spaces are
	// 	added afterwards (i is left-justified in a field of length five)
	// $5.3d -Displays i in decimal form, using a minimum of five characters overall
	// 	and a minimum of three digits. Since i is only two digits long, an extra
	// 	zero is added. The number is now is only three characters long, so
	// 	two spaces were added (i is right-justified)
	printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);

	// %10.3f -Display x in fixed decimal form, using 10 characters overall
	// 	with three digits after the decimal point, since x only requires seven 
	// 	characters, three spaces precede x.
	// %10.3e -Display x in exponential form, using 10 characters overall, with
	// 	three digits after the deciaml point, since x requires 9 characters overall,
	// 	one space precedes x
	// %-10   -Display x in either fixed decimal form or exponential forms, using 10
	// 	characters overall. The presence of the minus sign foreces left 
	// 	justification
	printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

	return 0;
}
