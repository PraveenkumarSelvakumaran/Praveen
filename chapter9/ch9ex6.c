/* Chapter 9
   PRAVEENKUMAR
   Program 9.6 */
   
#include <stdio.h>

struct time
{
	int hour;
	int minutes;
	int seconds;
};

int main (void)
{
	struct time timeUpdate (struct time now);
	struct time testTimes[5] = 
		{ { 11, 59, 59 }, { 12, 0, 0 }, { 1, 29, 59 },
		   { 22, 59, 59 }, { 19, 12, 27 }
		   } ;
	int i;
	
	for ( i = 0; i < 5; ++i ) {
		printf ("Time is %.2i:%.2i:%.2i", testTimes[i].hour, testTimes[i].minutes, testTimes[i].seconds);
		
		testTimes[i] = timeUpdate (testTimes[i]);
		
		printf (" ...one second later it's %.2i:%.2i:%.2i\n", testTimes[i].hour, testTimes[i].minutes, testTimes[i].seconds);
	}
	
	return 0;
}
		


