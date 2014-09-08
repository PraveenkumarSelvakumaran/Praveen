/* Chapter 6
   PRAVEENKUMAR
   Program 6.3 */

#include <stdio.h>

int main(void)
{
	int number_to_test;
	int remainder;

	printf("Enter the the number to test :\n");
	scanf("%d", &number_to_test);

	remainder = number_to_test % 2;

	if(remainder == 0)
		printf("The number is even");
	
	if(remainder != 0)
	    printf("The number is odd");
	

	return 0;
}


