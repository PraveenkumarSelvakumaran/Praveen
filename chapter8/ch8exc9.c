/* Chapter 8
   PRAVEENKUMAR
   Exercise 13*/
 
 #include <stdio.h>
 
 int ascend(int a[], int n, int choose)
 {
 	int i, j, temp;
 	 	
 	if ( choose == 0 ) {
 		for ( i = 0; i < n - 1; i++ ) {
 			for(j = i;j < n; j++)
 				if(a[i] > a[j]) {
 					temp = a[i];
 				    a[i] = a[j];
 				    a[j] = temp;
 			     }
 	     }
	 }
	  
	 else if( choose == 1) {
	 	for (i = 0; i < n - 1; i++) {
	 		for(j = i;j < n; j++) 
			 if(a[i] < a[j]) {
			 	temp = a[i];
 				a[i] = a[j];
 				a[j] = temp;
			 }
 	     }	
	}
	
	else
	{
		printf ("bad choice\n");
	}
 }
 
 int main (void)
 {
 	int i;
 	int a[10];
 	int choose;
 	int n;
 	
 	printf ("enter the array size\n");
 	scanf ("%i", &n);
 	
 	printf ("enter your array values\n");
 	for (i = 0; i < n;i++) {
 		scanf ("%i", &a[i]);
 	 }
 	
 	printf("array before sort\n");
 	
 	for(i = 0;i < n; i++) {
 		printf ("%i ", a[i] );
 	 }
 	
	 printf("\n");
 	
 	printf("enter the type of sort ascend(type 0) descend(type 1)");
 	scanf("%i", &choose);
 	
 	ascend ( a, n, choose );
 	for(i = 0; i < n; i++)
 	{
 		printf("%i\n", a[i]);
 	}
 	
 	return 0;
 }
