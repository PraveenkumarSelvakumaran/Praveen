/* Chapter 9
   PRAVEENKUMAR
   Excercise 3 */ 
 
 #include <stdio.h>
 
 struct time
 {
 	int hour;
 	int minutes;
 	int seconds;
 };
 int main (void)
 {
 	struct time elapsedtime (struct time t1, struct time t2);
 	struct time startingtime;
	struct time endingtime;
 	
 	printf ("enter the starting time\n");
 	scanf ("%i%i%i", &startingtime.hour, &startingtime.minutes, &startingtime.seconds);
 	
 	printf ("enter the ending time\n");
 	scanf ( "%i%i%i", &endingtime.hour, &endingtime.minutes, &endingtime.seconds);
 	
 	elapsedtime (startingtime, endingtime);
 	
 	return 0;
 }
 
 struct time elapsedtime ( struct time t1, struct time t2 )
 {
 	int n1;
 	int n2;
 	int n3;
 	
 			n3 = abs ( 60 - t1.seconds + t2.seconds);
 		
 			n2 = abs ( 60 - t1.minutes + t2.minutes );
 			
 			if ( t1.minutes > 0 )
 			{
 				n1 = abs ( abs ( t1.hour - t2.hour ) - 1 );
 			}
 			
 			else
 			{
 				n1 = abs ( abs ( t1.hour - t2.hour ) );		
 			}
 		printf ( "%.2i:%.2i:%.2i\n", n1, n2, n3 );
 	
 }
 
 
