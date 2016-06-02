#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n;
 double i, suma=1, factorial=1;
 printf("Vvedite chislo n:");
 scanf("%d", &n);
	
 for (i = 1; i <= n; i++) {
 factorial *= i;
 suma *= 24 *(i*i) + (5/factorial);
	}
 printf("\nDobutok = %lf", suma);
	
 return 0;
}
