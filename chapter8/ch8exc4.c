/* Chapter 8
   PRAVEENKUMAR
   Execercise 7 */
 
 #include <stdio.h>
 
 void power(int x, int n)
 {
 	int i;
 	long int val = 1;
 	if( x < 0) {
 		x = -x;
 	}
 	
 	if( n < 0) {
 		n = -n;
 	}
 	
 	for( i = 1; i <= n; i++ ) {
 		val *= x;
 	}
 	
 	printf("%i\n", val);
 }
 
 int main (void)
 {
 	void power (int x, int n);
 	power ( -10, -2 );
	 
	 return 0;	
 }
