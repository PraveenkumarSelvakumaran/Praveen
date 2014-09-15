/* Chapter 8
   PRAVEENKUMAR
   Exercise 4 */
 
 #include <stdio.h>
 
 float absoluteValue(float n)
 {
 	if(n < 0)
 		n = -n;
 	
	 return n;
 }
 
 float squareRoot(float n,float epsilon)
 {
 	float guess = 1.0;
 	
 	while(absoluteValue(guess * guess - n) >= epsilon)
 	{
		guess = ( n / guess + guess ) / 2.0;
		printf("%f\n", guess);
	}
 	return guess;
 }
 
 int main(void)
 {
 	printf("squareroot(4) = %f\n", squareRoot(4.0, 0.0001));
 	printf("squareroot(144) = %f\n", squareRoot(144.0, 0.0002));
 	
 	return 0;
 }
 
