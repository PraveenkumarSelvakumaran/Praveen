/* Chapter 9
   PRAVEENKUMAR
   Program 9.3 */	
 
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
 
 	struct date today, tommorow;
	int numberofdays (struct date d);
	 
 	printf ("enter today date\n");
 	scanf ("%i %i %i", &today.day, &today.month, &today.year);
 
 	if (today.day != numberofdays (today) ) 
 	{
 		tommorow.day = today.day + 1;
 		tommorow.month  = today.month;
 		tommorow.year = today.year;
 	}
 	else if ( today.month == 12 ) 
	{
 		tommorow.day = 1;
 		tommorow.month = 1;
 		tommorow.year = today.year + 1;
 	}
 	else
	{
		tommorow.day = 1;
 		tommorow.month = today.month + 1;
 		tommorow.year = today.year;	
	}
	printf ("tommorrow date = %i /%i /%.2i\n", tommorow.day, tommorow.month, tommorow.year % 100);

	return 0;
}

int numberofdays (struct date d) 
{
	int days;
	bool isleapyear (struct date d);
	const int dayspermonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	
	if ( isleapyear(d) == true && d.month == 2)
	{
		days = 29;
	}
	else
		days = dayspermonth[d.month - 1];
	
	return days;
}

bool isleapyear ( struct date d )
{
	bool leapflag;
	
	if ( ( d.year % 4 == 0 && d.year % 100 != 0 ) || d.year % 400 == 0 )
	{
		leapflag = true;
	}
	else
	{
		leapflag = false;
	}
	
	return leapflag;
}
