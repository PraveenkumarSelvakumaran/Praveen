/*Chapter 5
  PRAVEENKUMAR
  Program 5.8 */

#include <stdio.h>

int main(void)
{

	int number;
	int right_digit;

	printf ("Enter your number.\n");
	scanf ("%i", &number);

	while ( number != 0 ) {
		right_digit = number % 10;
	    printf ("%i", right_digit);
	    number = number / 10;
	}

	printf ("\n");

	return 0;
} 


	
