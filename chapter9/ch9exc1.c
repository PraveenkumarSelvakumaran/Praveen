/* Chapter 9
   PRAVEENKUMAR
   Exercise 2 */	
 
 #include <stdio.h>
 #include <stdbool.h>
 
 struct date
 {
 	int day;
 	int month;
 	int year;
 };
 
 int main (void)
 {
 
 	struct date startingDay;
	struct date endingDay;
	int numberofdays (struct date a, struct date b);
	
	 
 	printf ("enter starting date (dd / mm / yyyy)\n");
 	scanf ("%i %i %i", &startingDay.day, &startingDay.month, &startingDay.year);
 	
 	printf ("enter ending date (dd / mm / yyyy)\n");
 	scanf ("%i %i %i", &endingDay.day, &endingDay.month, &endingDay.year);
 	
 	int numberofdays1 = numberofdays ( startingDay, endingDay );

    printf ("The today number of days between the starting and ending days is %i ", numberofdays1);
    
	return 0;
}
 
 int numberofdays (struct date a, struct date b)
 {
 	int n1;
 	int n2;
 	int numberofdays1;
 	
 	if ( a.month <= 2 )
 	{
 		n1 = ( 1461 * (a.year - 1 ) ) / 4 + ( 153 * ( a.month + 13  ) ) / 5 + ( a.day - 1 );
    }
 	
	else {
 		n1 = ( 1461 * (a.year) ) / 4 + ( 153 * ( a.month + 1 ) ) / 5 + ( a.day - 1);
 	}
 
 	if ( b.month <= 2)
 	{
 		n2 = ( 1461 * (b.year - 1)) / 4 + (153 * (b.month + 13) ) / 5 + ( b.day - 1 );
 	}
 	else {
 		n2 = (1461 * ( b.year ) ) / 4 + ( 153 * ( b.month + 1 ) ) / 5 + ( b.day - 1 );
 	}
 	
 	numberofdays1 = n2 - n1;
 	
 	
 	return numberofdays1;
 }
 
 	
 	
