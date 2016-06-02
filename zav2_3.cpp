#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
 int m, n, r;
 printf ("m >= n\n");
 printf("Vvedite n:");
 scanf("%d", &n);
 printf("Vvedite m:");
 scanf("%d", &m);
	
 for ( ; n != 0; ){
 r = m%n;
 m = n;
 n = r;
	}
 printf("NOD = %d", m);
	
 return 0;
}
