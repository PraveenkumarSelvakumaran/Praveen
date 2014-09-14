/* Chapter 8
   PRAVEENKUMAR
   Program 8.14 */ 	
 
 #include <stdio.h>
 
 long int numbertoconvert;
 int convertednumber[64];
 int base;
 int digit = 0;
 
 void getbaseandnumber(void)
 {
 	printf("enter the number to be converted?");
 	scanf("%li", &numbertoconvert);
 	
 	printf("enter the base");
 	scanf("%i", &base);
 	
 	if (base < 2 || base > 16) {
 		printf("bad option");
 		base = 10;
 	}
 }
 
 void convertnumber(void)
 {
 	do {
 		convertednumber[digit] = numbertoconvert % base;
 		++digit;
 		numbertoconvert /= base;
 	}
	while (numbertoconvert != 0);
 }
 
 void displayconvertednumber(void)
 {
 	int nextdigit;
	const char basedigit[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
	
	printf("converted number is");
	
	for(--digit; digit >= 0; --digit) {
		nextdigit = convertednumber[digit];
		printf("%c", basedigit[nextdigit]);
	}
	
	printf("\n");
}

int main(void)
{
	void getbaseandnumber(void);
	void convertnumber(void);
	void displayconvertednumber(void);
	
	getbaseandnumber();
	convertnumber();
	displayconvertednumber();

	return 0;
}
	
