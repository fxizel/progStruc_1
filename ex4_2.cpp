#include <stdio.h>
#include <stdlib.h>

void main () {
	int div1;
	int div2;
	int n1;

	div1 = 3;
	div2 = 6;
	
	printf("Donnez un entier:\n");
	scanf("%d",&n1);

	// Multiple de
	if ( n1 % div1 == 0 ){
		printf("Il est multiple de %d\n",div1);
	}
	// Pair
	if ( n1 % 2 == 0 ){
		printf("Il est pair\n");
	}
	// Divisible
	if ( n1 % div2 == 0 ){
		printf("Il est divisible de %d\n",div2);
	}
	
	system("pause");
}