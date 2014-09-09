/* Chapter 6
   PRAVEENKUMAR
   Program 6.7 */
   
#include <stdio.h>

int main (void)
{
	char c;
	
	printf ("Enter a single character:\n");
	scanf ("%c", &c);
	
	if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
	     printf ("It's an alphabetic character.\n");
	else if ( c >= '0' && c <= '9' )
		 printf ("It's a digit .\n");
	else
		 printf ("Its a specialcharacter.\n");
		 
	return 0;
}
