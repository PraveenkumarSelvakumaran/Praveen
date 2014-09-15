/*Chapter 8
  PRAVEENKUMAR
  Exercise 10 */
  
#include <stdio.h>

	int prime(int);
int main (void)
{
	int n,p;

	printf ("Enter a number : ");
	scanf ( "%d", &n);
	
	p = prime (n);
	if ( p == 1 )
		printf ("%d is prime\n", n);
	else
		printf ("%d is not prime\n", n);
		
return 0;
}

int prime ( int n )
{
	int i;
	
	for ( i = 2; i < n; i++ )  {
		if ( n % i == 0)
	
	return 0;
	}

return 1;
}
