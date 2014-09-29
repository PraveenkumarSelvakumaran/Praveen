/* Chapter 10
   PRAVEENKUMAR
   Exercise 10.5 */
   
#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	const char source[] = "praveenkumar";
	const char s[] = "praveen";
	int findString (const char source[], const char[] );
	
	return 0;
	
}

int findString (const char source[], const char s[])
{
	int i;
	int j;
	int foundit = false;
	
	for ( j = 0; source[i] != '\0' && !foundit; ++i )
	{
		foundit = true;
	
	for ( j = 0; s[j] != '\0' && foundit; ++j )
		if ( source [j + i] != s[j] || source[j + i] == '\0' )
			foundit = false;
		
		if (foundit)
			return i;
    }
    
    return -1;
			
}
