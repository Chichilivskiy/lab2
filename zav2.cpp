#include <stdio.h>

int main(){
	int n,i;
	printf("Vvedite  natyralnoe chislo n:\n");
	printf("n=");
	scanf("%d",&n);
	
	for(i=0;n > 0;i++){
		n = n / 10;
	}
	
	printf("Vashe chislo skladaetsa iz %d tsifr",i);
	return 0;
}
