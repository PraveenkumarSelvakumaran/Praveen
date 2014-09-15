/* Chapter 8
   PRAVEENKUMAR
   Exercise 9 */
 
 #include <stdio.h>
 
 int gcd(int u, int v)
 {
 	int temp;
 	
 	while(v != 0) {
 		temp = v % u;
 		u = v;
 		v = temp;
 	}
 	
 	return u;
}

int lcm(int u, int v)
{
	int lcm;
	
	lcm = u * v / gcd(u, v);
	
	return lcm;
} 
 int main(void)
 {
 	int result;
 	
 	result = lcm(15, 10);
 	printf("lcm of 15 and 10 is %i\n", result);

 	result = lcm(15, 45);
 	printf("lcm of 45 and 15 is %i\n", result);
 	
 	return 0;
 }
