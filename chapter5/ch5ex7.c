/* Chapter 5
   PRAVEENKUMAR
   Program 5.7 */

#include <stdio.h>

int main(void)
{
	int u;
	int v;
	int temp;

	printf (" Please type in Two Non negative integers :\n");
	scanf ("%i%i", &u, &v);

	while ( v != 0 ) {
		temp = u % v;
     	u = v;
	    v = temp;
	}

	printf ("Their greatest common divisor is %i\n", u);
	
	return 0;

}

