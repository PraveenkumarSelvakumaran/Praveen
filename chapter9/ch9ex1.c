/* Chapter 9
   PRAVEENKUMAR
   Program 9.1 */
   
#include <stdio.h> 

int main (void)
{
	struct date
	{
		int month;
		int day;
		int year;
	};
	
	struct date today;
	
	today.month = 9;
	today.day = 14;
	today.year = 2004;
	
	printf ("Today's date is %i/%i/%.2i.\n", today.month, today.day, today.year % 100);
	
	return 0;
}
