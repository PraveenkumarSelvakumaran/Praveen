/* Chapter 6
	PRAVEENKUMAR
	Execercise 2 */
	
 #include <stdio.h>
 
 int main(void)
 {
 	float a;
 	float b;
 	
 	printf ( "enter your values" );
 	scanf ("%f %f", &a, &b);
 	printf ("%f %f\n", a, b);
 	
 			if ( b == 0 )
 			printf ("divided by zero");
 			
 			else
 			
 			printf ( "%.3f", a / b );
 		
 	return 0;
 }
