/* Chapter 10
   PRAVEENKUMAR
   Program 10.8 */
   
#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	char text[81];
	int totalwords = 0;
	int countWords ( const char string[] );
	void readLine ( char buffer[]);
	bool endoftext = false;
	
	printf ("Type in your text.\n");
	printf ("When you are done, press 'RETURN'. \n\n");
	
	while ( ! endoftext )
	{
		readLine (text);
		
		if ( text[0] == '\0' )
			endoftext = true;
		
		else
			totalwords += countwords (text);
	}
	
	printf ("\nThere are %i words in the above text.\n", totalwords);
	
	return 0;
}   
