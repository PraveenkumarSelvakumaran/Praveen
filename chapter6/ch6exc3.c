/* Chapter 6
   PRAVEENKUMAR
   Excercice 6 */ 	
   
#include <stdio.h>

int main(void)
{
	int n;
	int num;
	int sum=0;
	
	printf ("Enter the number\n");
	scanf ("%i", &n);
	printf ("%i\n\n", n);
	
	while ( n != 0 ) 
	{
	    num = n % 10;
		n = n / 10;
		
		if ( num == 0 )
		printf ("zero \t");
		
		else if ( num == 1 )
		printf ("one\t");
		
		else if ( num == 2 )
		printf ("two \t");
		
		else if ( num ==3 )
		printf ("three \t"); 
		
		else if ( num == 4)
		printf ("four \t");
		
		else if( num == 5)
		printf ("five \t");
		
		else if ( num == 6)
		printf ("six \t");
		
		else if ( num == 7)
		printf ("seven \t");
		
		else if ( num == 8)
		printf ("eight \t");
		
		else if ( num == 9)
		printf ("nine \t");	
	}
	
	printf ("\n");
	
	return 0;
}
