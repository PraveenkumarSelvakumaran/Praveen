/* Chapter 10
   PRAVEENKUMAR
   Exercise 10.6 */
   
#include <stdio.h>

void removeString (char text[], char output[], int x, int y)
{
    for ( int i = 0; i < x; i++)
        output[i] = text[i];

    for (int i = y; text[i] != '\0'; i++)
        output[i - (y - x)] = text[i];

}
   
   
int main (void)
{
	char s1[81] = "the wrong son";
	int Starting = 4;
	int Ending = 6;
	
	removeString (s1, Starting, Ending );

	printf ("The new text is as follows:\n");
	printf ("%s\n", s1);
	
	return 0;
}


