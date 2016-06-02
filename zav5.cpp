#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
 double factorial = 1, dodanok = 1, suma = 0, factorial2n = 1 ;
 int i;
		
	
 for (i=1; dodanok >= 0.0001; i++) {
 factorial *= i;
 factorial2n = factorial2n*(2*i-1)*(i*2);
 dodanok = (factorial*factorial)/factorial2n;
 suma += dodanok;
 printf("\n%lf", dodanok); 
 system("pause");
	
	}
	
 printf("\n Kolichestvo iteraciy = %d", i);
 printf("\nSuma = %lf\n", suma);
	
 return 0;
}
