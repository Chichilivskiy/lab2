#include <stdio.h>
#include <stdlib.h>

int chislo(int p);
int main() {
 int n, a, i;
 printf("Vvedite chislo n:");
 scanf("%d", &n);
 a = chislo(n);
 if (a== 1) {
 printf("Danoe chislo prostoe\n");
 } else {
 printf ("Danoe chislo ne prostoe\n");
	}
	
 printf("Chisla menshi prostogo:");
 for (i = 1; i < n; i++){
 a = chislo(i);
 if (a ==1){
 printf ("%d ", i);
		}
	}
	
 return 0;
}
int chislo (int n) {
 int i = 2, ostacha;
 while (i < n){
 ostacha = n%i;
 if (ostacha == 0)
 return 0;
 i++;
	}
 return 1;
}
