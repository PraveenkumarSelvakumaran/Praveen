/* Chapter 5
   PRAVEENKUMAR
   Program 8.5 */
   
#include <stdio.h>

void gcd (int u, int v)
{
	int temp;
	
	printf ("the gcd of %i and %i is", u, v);
	
	while ( v != 0 ) {
		temp = u % v;
		u = v;
		v =  temp;
	}
	
	printf ("%i\n", u );
}

int main (void)
{
	gcd (10, 35);
	gcd (1026, 405);
	gcd (83, 240);
	
	return 0;
}
