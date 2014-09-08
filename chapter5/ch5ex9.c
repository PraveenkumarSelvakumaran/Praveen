/* Chapter 5
   PRAVEENKUMAR
   Program 5.9 */

#include <stdio.h>
int main ()
{
	int number;
	int right_digit;

	printf ("Enter your number.\n");
	scanf ("%i", &number);

	do {
		right_digit = number % 10;
		printf ("%i", right_digit);
		number = number / 10;
	}
	while ( number != 0 );
	
	printf ("\n");

	return 0;
}

