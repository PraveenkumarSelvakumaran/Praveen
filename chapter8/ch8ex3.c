/* Chapter 8
   PRAVEENKUMAR
   Program 8.3 */
   
#include <stdio.h>

void printMessage (void)
{
	printf ("Programming is fun. \n");
}

int main (void)
{
	int i;
	
	for ( i = 1; i <= 5; ++i )
		printMessage ();
		
	return 0;
}
